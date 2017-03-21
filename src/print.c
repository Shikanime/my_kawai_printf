#include "loader.h"

/* Usable functions */

void (*print[7])(va_list * ap, char * query, int * opt) = {
   integerPrint,
   longPrint,
   stringPrint,
   stringPrint,
   pointerPrint,
   shortPrint,
   hexadecimalPrint
};

/* Local functions */

void integerPrint(va_list * ap, char * query, int * opt){
    va_start(ap, query);
    stringPrintHelper("alors la?");
    integerPrintHelper(var_arg(ap, int));
    stringPrintHelper("et la?");
    va_end(ap);
}

void longPrint(va_list * ap, char * query, int * opt){
}

void charPrint(va_list * ap, char * query, int * opt){
  stringPrintHelper(var_arg(ap, string));
}

void stringPrint(va_list * ap, char * query, int * opt){
  stringPrintHelper(var_arg(ap, string));
}

void pointerPrint(va_list * ap, char * query, int * opt){
}

void shortPrint(va_list * ap, char * query, int * opt){
}

void hexadecimalPrint(va_list * ap, char * query, int * opt){
}
