#include "loader.h"

/* Usable functions */

void (*print[7])(char * query, va_list ap, int * opt) = {
   integerPrint,
   longPrint,
   stringPrint,
   stringPrint,
   pointerPrint,
   shortPrint,
   hexadecimalPrint
};

/* Local functions */

void integerPrint(char * query, va_list ap, int * opt){
    va_start(ap, query);
    stringPrintHelper("alors la?");
    integerPrintHelper(va_arg(ap, query));
    stringPrintHelper("et la?");
    va_end(ap);
}

void longPrint(char * query, va_list ap, int * opt){
}

void charPrint(char * query, va_list ap, int * opt){
  stringPrintHelper(var_arg(ap, string));
}

void stringPrint(char * query, va_list ap, int * opt){
  stringPrintHelper(var_arg(ap, string));
}

void pointerPrint(char * query, va_list ap, int * opt){
}

void shortPrint(char * query, va_list ap, int * opt){
}

void hexadecimalPrint(char * query, va_list ap, int * opt){
}
