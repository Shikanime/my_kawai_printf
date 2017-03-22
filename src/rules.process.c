#include "headers/loader.h"

/* Usable functions */

int (*process[PROCESS_NUMBER])(const char * query, int n, int * opt, va_list * ap) = {
   escapeProcess,
   integerProcess,
   charProcess,
   stringProcess,
   pointerProcess,
   hexadecimalProcess,
   octalProcess,
   unsignedIntegerProcess,
   floatPointProcess,
   doublePrecisionProcess
};

/* Rule list functions */

int escapeProcess(const char * query, int n, int * opt, va_list * ap){
  (void) ap;
  (void) opt;
  if (query[n] == '%'){
    charPrintHelper('%');
    return 1;
  }
  return 0;
}

int integerProcess(const char * query, int n, int * opt, va_list * ap){
  if (query[n] == 'd' || query[n] == 'i'){
    if (opt[lenghtMod] == longIntLenght){
      integerPrintHelper(va_arg(*ap, int)); // TO DO
    } else if (opt[lenghtMod] == shortIntLenght){
      integerPrintHelper(va_arg(*ap, int)); // TO DO
    } else {
      integerPrintHelper(va_arg(*ap, int));
    }
    return 1;
  }
  return 0;
}

int charProcess(const char * query, int n, int * opt, va_list * ap){
  (void) opt;
  if (query[n] == 'c'){
    charPrintHelper((char) va_arg(*ap, int));
    return 1;
  }
  return 0;
}

int stringProcess(const char * query, int n, int * opt, va_list * ap){
  (void) opt;
  if (query[n] == 's'){
    stringPrintHelper(va_arg(*ap, char *));
    return 1;
  }
  return 0;
}

int pointerProcess(const char * query, int n, int * opt, va_list * ap){
  (void) opt;
  if (query[n] == 'p'){
    addressPrintHelper(va_arg(*ap, unsigned int));
    return 1;
  }
  return 0;
}

int hexadecimalProcess(const char * query, int n, int * opt, va_list * ap){
  (void) opt;
  if (query[n] == 'x'){
    hexadecimalPrintHelper(va_arg(*ap, unsigned int));
    return 1; 
  } else if (query[n] == 'X') {
    hexadecimalCapitalPrintHelper(va_arg(*ap, unsigned int));
    return 1; 
  }
  return 0;
}

int octalProcess(const char * query, int n, int * opt, va_list * ap){
  (void) opt;
  if (query[n] == 'o'){
    octalPrintHelper(va_arg(*ap, unsigned int));
    return 1; 
  }
  return 0;
}

int unsignedIntegerProcess(const char * query, int n, int * opt, va_list * ap){
  (void) opt;
  if (query[n] == 'u'){
    unsignedIntegerPrintHelper(va_arg(*ap, unsigned int));
    return 1; 
  }
  return 0;
}

int floatPointProcess(const char * query, int n, int * opt, va_list * ap){
  (void) query;
  (void) opt;
  if (query[n] == 'f'){
    va_arg(*ap, double);
    return 1;
  } else if (query[n] == 'F'){
    va_arg(*ap, double);
    return 1;
  } else if (query[n] == 'G'){
    va_arg(*ap, double);
    return 1;
  }
  return 0;
}

int doublePrecisionProcess(const char * query, int n, int * opt, va_list * ap){
  (void) query;
  (void) opt;
  if (query[n] == 'e'){
    va_arg(*ap, double);
    return 1;
  } else if (query[n] == 'E'){
    va_arg(*ap, double);
    return 1;
  }
  return 0;
}