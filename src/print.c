#include "loader.h"

/* Local functions */

void integerPrint(va_list ap, char* opt){
  integerPrintHelper(var_arg(ap, int));
}

void longPrint(va_list ap, char* opt){
}

void charPrint(va_list ap, char* opt){
  charPrintHelper(var_arg(ap, char));
}

void char *Print(va_list ap, char* opt){
  char *PrintHelper(var_arg(ap, char *));
}

void pointerPrint(va_list ap, char* opt){
}

void shortPrint(va_list ap, char* opt){
}

void hexadecimalPrint(va_list ap, char* opt){
}
