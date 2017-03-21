#include "loader.h"

/* Usable functions */

void                my_printf(char * query, ...) {
    unsigned int    queryPosition;
    int             j;
    long int        querySize;
    int             opt[5];
    va_list         ap;

    querySize = stringLengthHelper(query);

    va_start(ap, query);

    queryPosition = 0;
    while (queryPosition < querySize) {
        if (query[queryPosition] == '%') {
          ++queryPosition;

          // Options
          // TODO

          // Process
          j = 0;
          while (j < 7) {
             if ((*check[j])(query, queryPosition) == 1){
                 (*print[j])(ap, opt);
             }
             ++j;
          }
        } else {
            charPrintHelper(query[queryPosition]);
        }
        ++queryPosition;
    }
    charPrintHelper('\n');

    va_end(ap);
}
