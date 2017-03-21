#include "loader.h"

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
          while (j < 7) {
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
