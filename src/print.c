#include "loader.h"

/* Usable functions */

void (*print[])(va_list ap, int * opt) = {
   integerPrint,
   longPrint,
   stringPrint,
   stringPrint,
   pointerPrint,
   shortPrint,
   hexadecimalPrint
};

/* Local functions */

void integerPrint(va_list ap, int * opt){
  integerPrintHelper(var_arg(ap, int));
}

void longPrint(va_list ap, int * opt){
}

void charPrint(va_list ap, int * opt){
  stringPrintHelper(var_arg(ap, string));
}

void stringPrint(va_list ap, int * opt){
  stringPrintHelper(var_arg(ap, string));
}

void pointerPrint(va_list ap, int * opt){
}

void shortPrint(va_list ap, int * opt){
}

void hexadecimalPrint(va_list ap, int * opt){
}
