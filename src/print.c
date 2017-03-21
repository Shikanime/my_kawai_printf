#include "headers/rules.print.h"

/* Local functions */

void integerPrint(va_list ap, string opt){
  integerPrintHelper(var_arg(ap, int));
}

void longPrint(va_list ap, string opt){
}

void charPrint(va_list ap, string opt){
  stringPrintHelper(var_arg(ap, string));
}

void stringPrint(va_list ap, string opt){
  stringPrintHelper(var_arg(ap, string));
}

void pointerPrint(va_list ap, string opt){
}

void shortPrint(va_list ap, string opt){
}

void hexadecimalPrint(va_list ap, string opt){
}
