#include "loader.h"
#define PROCESS_NUMBER 7

/* Usable functions */

void                my_printf(const string query, ...) {
    unsigned int    i;
    int             j;
    size_t          querySize;
    stringopt[5];
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
            stringPrintHelper(query[i]);
        }
        ++i;
    }

    va_end(ap);
}
