#include "loader.h"

/* Usable functions */

int (*check[7])(va_list ap, const char * query, unsigned int n) = {
   integerCheck,
   longCheck,
   stringCheck,
   stringCheck,
   pointerCheck,
   shortCheck,
   hexadecimalCheck
};

/* local functions */

int integerCheck(va_list ap, const char * query, unsigned int n){
  if (query[n] == 'd'){
    integerPrintHelper(va_arg(ap, int));
    return 1;
  }
  return 0;
}

int longCheck(va_list ap, const char * query, unsigned int n){
  (void) ap;
  if (query[n] == 'l' && query[n + 1] == 'd')
    return 1;
  return 0;
}

int charCheck(va_list ap, const char * query, unsigned int n){
  (void) ap;
  if (query[n] == 'c' || (query[n]))
    return 1;
  return 0;
}

int stringCheck(va_list ap, const char * query, unsigned int n){
  (void) ap;
  if (query[n] == 's')
    return 1;
  return 0;
}

int pointerCheck(va_list ap, const char * query, unsigned int n){
  (void) ap;
  if (query[n] == 'p')
    return 1;
  return 0;
}

int shortCheck(va_list ap, const char * query, unsigned int n){
  (void) ap;
  if (query[n] == 'h' && query[n + 1] == 'd')
    return 1;
  return 0;
}

int hexadecimalCheck(va_list ap, const char * query, unsigned int n){
  (void) ap;
  if (query[n] == 'x')
    return 1;
  return 0;
}
