#include "loader.h"

/* Usable functions */

int (*check[7])(const char * query, unsigned int n) = {
   integerCheck,
   longCheck,
   stringCheck,
   stringCheck,
   pointerCheck,
   shortCheck,
   hexadecimalCheck
};

/* local functions */

int integerCheck(const char * query, unsigned int n){
  if (query[n] == 'd')
    return 1;
  return 0;
}

int longCheck(const char * query, unsigned int n){
  if (query[n] == 'l' && query[n + 1] == 'd')
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

int shortCheck(const char * query, unsigned int n){
  if (query[n] == 'h' && query[n + 1] == 'd')
    return 1;
  return 0;
}

int hexadecimalCheck(const char * query, unsigned int n){
  if (query[n] == 'x')
    return 1;
  return 0;
}
