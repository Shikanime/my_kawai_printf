#include "loader.h"

/* Usable functions */

void                my_printf(const char * query, ...) {
    unsigned int    positionQuery;
    unsigned int    j;
    unsigned long int        sizeQuery;
    int             opt[5];
    va_list         ap;

    sizeQuery = (unsigned int)stringLengthHelper((char *)query);

    va_start(ap, query);

    positionQuery = 0;
    while (positionQuery < sizeQuery) {
        if (query[positionQuery] == '%' && query[positionQuery + 1] != '\0') {
          ++positionQuery;

          // Options
          // TODO

          // Process
          j = 0;
          while (j < 7) {
             if ((*check[j])((char *)query, positionQuery) == 1){
                 (*print[j])((char *)query, ap, opt);
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
