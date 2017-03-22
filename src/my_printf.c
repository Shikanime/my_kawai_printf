#include "loader.h"

/* Usable functions */

void                my_printf(const char * query, ...) {
    unsigned int    positionQuery;
    unsigned int    j;
    long int        sizeQuery;
    int             opt[5];
    va_list         ap;

    sizeQuery = stringLengthHelper(query);

    va_start(ap, query);

    positionQuery = 0;
    while (positionQuery < sizeQuery) {
        if (query[positionQuery] == '%' && query[positionQuery + 1] != '\0') {
          ++positionQuery;

          // Options
          j = 0;
          while (j < OPTION_NUMBER) {
             if ((*option[j])(query, positionQuery, &opt)){
                 j = OPTION_NUMBER;
             }
             ++j;
          }

          // Process
          j = 0;
          while (j < PROCESS_NUMBER) {
             if ((*check[j])(query, positionQuery)){
                 (*print[j])(ap, opt);
                 j = PROCESS_NUMBER;
             }
             ++j;
          }
        } else {
            charPrintHelper(query[positionQuery]);
        }
        ++positionQuery;
    }
    charPrintHelper('\n');

    va_end(ap);
}
