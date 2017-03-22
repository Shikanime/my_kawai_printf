#include "loader.h"

/* Usable functions */

int (*process[PROCESS_NUMBER])(const char * query, unsigned int n, va_list ap, int * opt) = {
   escapeProcess,
   integerProcess,
   charProcess,
   stringProcess,
   pointerProcess,
   hexadecimalProcess
};

/* local functions */

int escapeProcess(const char * query, unsigned int n, va_list ap, int * opt){
  (void) ap;
  (void) opt;
  if (query[n] == '%'){
    charPrintHelper('%');
    return 1;
  }
  return 0;
}

int integerProcess(const char * query, unsigned int n, va_list ap, int * opt){
  if (query[n] == 'd'){
    if (opt[lenghtMod] == longIntLenght){
      integerPrintHelper(va_arg(ap, int)); // TO DO
    } else if (opt[lenghtMod] == shortIntLenght){
      integerPrintHelper(va_arg(ap, int)); // TO DO
    } else {
      integerPrintHelper(va_arg(ap, int));
    }
    return 1;
  }
  return 0;
}

int charProcess(const char * query, unsigned int n, va_list ap, int * opt){
  (void) opt;
  if (query[n] == 'c' || (query[n])){
    charPrintHelper((char) va_arg(ap, int));
    return 1;
  }
  return 0;
}

int stringProcess(const char * query, unsigned int n, va_list ap, int * opt){
  (void) opt;
  if (query[n] == 's'){
    charPrintHelper(va_arg(ap, char *)[0]);
    stringPrintHelper(va_arg(ap, char *));
    return 1;
  }
  return 0;
}

int pointerProcess(const char * query, unsigned int n, va_list ap, int * opt){
  (void) opt;
  (void) ap;
  if (query[n] == 'p')
    return 1;
  return 0;
}

int hexadecimalProcess(const char * query, unsigned int n, va_list ap, int * opt){
  (void) opt;
  (void) ap;
  if (query[n] == 'x')
    return 1;
  return 0;
}
