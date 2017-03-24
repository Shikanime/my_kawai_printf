/*
   my_printf.c for my_printf in /home/asuramaru/Project/print/phetsi_w/src

   Made by PHETSINORATH William
   Login   <phetsi_w@etna-alternance.net>

   Started on  Fri Mar 24 14:36:33 2017 PHETSINORATH William
   Last update Fri Mar 24 14:36:45 2017 PHETSINORATH William
*/

#include "headers/my_printf.h"

/* Usable functions */

void        my_printf(const char * query, ...) {
    va_list ap;

    va_start(ap, query);
    machina(query, &ap);
    va_end(ap);
}

/* Internal functions */

void            machina(const char * query, va_list * ap) {
    int         positionQry;
    long int    sizeQry;
    int         optionsQry[OPTION_NUMBER];

    sizeQry = stringLengthHelper(query);

    positionQry = 0;
    while (positionQry < sizeQry) {
        if (query[positionQry] == '%') {
	  if (query[positionQry + 1] != '\0') {
            ++positionQry;
            optionsMachina(query, &positionQry, optionsQry);
            processMachina(query, &positionQry, optionsQry, ap);
	  } else if (query[positionQry + 1] != '\n') {
	    charPrintHelper('\n');
	  } else if (query[positionQry + 1] != '\t') {
  	    charPrintHelper('\t');
	  }
        } else
            charPrintHelper(query[positionQry]);
        ++positionQry;
    }
}

void    optionsMachina(const char * query, int * positionQry, int * optionsQry) {
    int i;

    i = 0;
    while (i < OPTION_NUMBER) {
        if ((*option[i])(query, *positionQry, optionsQry))
            ++positionQry;
        ++i;
    }
}

void    processMachina(const char * query, int * positionQry, int * optionsQry, va_list * ap) {
    int i;

    i = 0;
    while (i < PROCESS_NUMBER) {
        if ((*process[i])(query, *positionQry, optionsQry, ap))
            i = PROCESS_NUMBER;
        ++i;
    }
}
