#include "headers/loader.h"

/* Encapsulated protypes */

void machina(const char * query, va_list * ap);
void optionsMachina(const char * query, int * positionQry, int * optionsQry);
void processMachina(const char * query, int * positionQry, int * optionsQry, va_list * ap);

/* Usable functions */

void        my_printf(const char * query, ...) {
    va_list ap;

    va_start(ap, query);
    machina(query, &ap);
    va_end(ap);
}

/* Encapsulated functions */

void            machina(const char * query, va_list * ap){
    int         positionQry;
    long int    sizeQry;
    int         optionsQry[OPTION_NUMBER];

    sizeQry = stringLengthHelper(query);

    positionQry = 0;
    while (positionQry < sizeQry) {
        if (query[positionQry] == '%' && query[positionQry + 1] != '\0') {
          ++positionQry;
          optionsMachina(query, &positionQry, optionsQry);
          processMachina(query, &positionQry, optionsQry, ap);
        } else
            charPrintHelper(query[positionQry]);
        ++positionQry;
    }
}

void    optionsMachina(const char * query, int * positionQry, int * optionsQry){
    int i;

    i = 0;
    while (i < OPTION_NUMBER){
        if ((*option[i])(query, *positionQry, optionsQry))
            ++positionQry;
        ++i;
    }
}

void    processMachina(const char * query, int * positionQry, int * optionsQry, va_list * ap){
    int i;

    i = 0;
    while (i < PROCESS_NUMBER){
        if ((*process[i])(query, *positionQry, optionsQry, ap))
            i = PROCESS_NUMBER;
        ++i;
    }
}