#include "loader.h"

/* Usable functions */

int (*option[OPTION_NUMBER])(const char * query, unsigned int n, int * opt) = {
    longOption
};

/* Local functions */

int longOption(const char * query, unsigned int n, int * opt){
stringPrintHelper("1");
  if (query[n] == 'h' && query[n + 1] != '\0'){
stringPrintHelper("2");
      opt[lenghtMod] = 1;
      return 1;
  }
  return 0;
}