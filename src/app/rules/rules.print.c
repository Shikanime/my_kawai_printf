#include "../../main.h"
#include "rules.print.h"

/* Local functions */

void integerPrint(va_list ap, char* opt){
  integerPrintHelper(var_arg(ap, int));
}

void longPrint(va_list ap, char* opt){
}

void charPrint(va_list ap, char* opt){
  charPrintHelper(var_arg(ap, char));
}

void stringPrint(va_list ap, char* opt){
  stringPrintHelper(var_arg(ap, string));
}

void pointerPrint(va_list ap, char* opt){
}

void shortPrint(va_list ap, char* opt){
}

void hexadecimalPrint(va_list ap, char* opt){
}
