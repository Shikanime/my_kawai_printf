#include "loader.h"

/* Usable functions */

int (*check[CHECK_NUMBER])(const char * query, unsigned int n) = {
   escapeCheck,
   integerCheck,
   charCheck,
   stringCheck,
   pointerCheck,
   hexadecimalCheck
};

/* local functions */

int escapeCheck(const char * query, unsigned int n){
  if (query[n] == '%')
    return 1;
  return 0;
}

int integerCheck(const char * query, unsigned int n){
  if (query[n] == 'd')
    return 1;
  return 0;
}

int charCheck(const char * query, unsigned int n){
  if (query[n] == 'c' || (query[n]))
    return 1;
  return 0;
}

int stringCheck(const char * query, unsigned int n){
  if (query[n] == 's')
    return 1;
  return 0;
}

int pointerCheck(const char * query, unsigned int n){
  if (query[n] == 'p')
    return 1;
  return 0;
}

int hexadecimalCheck(const char * query, unsigned int n){
  if (query[n] == 'x')
    return 1;
  return 0;
}
