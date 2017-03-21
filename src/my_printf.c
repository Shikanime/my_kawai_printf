#include "loader.h"
#define PROCESS_NUMBER 7

/* Global local declaration */

int (*check[])(const char * query, int i) = {
   integerCheck,
   longCheck,
   stringCheck,
   stringCheck,
   pointerCheck,
   shortCheck,
   hexadecimalCheck
};

void (*print[])(va_list ap, int * opt) = {
   integerPrint,
   longPrint,
   stringPrint,
   stringPrint,
   pointerPrint,
   shortPrint,
   hexadecimalPrint
};

/* Usable functions */

void                my_printf(char * query, ...) {
    unsigned int    i;
    int             j;
    long int        querySize;
    int             opt[5];
    va_list         ap;

    querySize = stringLengthHelper(query);

    va_start(ap, query);

    i = 0;
    while (i < querySize) {
        if (query[i] == '%') {
          ++i;

          // Options
          // TODO

          // Process
          j = 0;
          while (j < PROCESS_NUMBER) {
             if ((*check[j])(query, j))
                (*print[j])(ap, opt);
             ++j;
          }
        } else {
            charPrintHelper(query[i]);
        }
        ++i;
    }

    va_end(ap);
}
