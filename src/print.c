#include "loader.h"

/* Usable functions */

void (*print[PROCESS_NUMBER])(va_list ap, int * opt) = {
   escapePrint,
   integerPrint,
   charPrint,
   stringPrint,
   pointerPrint,
   hexadecimalPrint
};

/* Local functions */

void escapePrint(va_list ap, int * opt){
  (void) ap;
  (void) opt;
  charPrintHelper('%');
}

void integerPrint(va_list ap, int * opt){
  if (opt[lenghtMod] == longIntLenght){
    integerPrintHelper(va_arg(ap, int)); // TO DO
  } else if (opt[lenghtMod] == shortIntLenght){
    integerPrintHelper(va_arg(ap, int)); // TO DO
  } else {
    integerPrintHelper(va_arg(ap, int));
  }
}

void charPrint(va_list ap, int * opt){
  (void) opt;
  charPrintHelper((char) va_arg(ap, int));
}

void stringPrint(va_list ap, int * opt){
  (void) opt;
  stringPrintHelper(va_arg(ap, char *));
}

void pointerPrint(va_list ap, int * opt){
  (void) ap;
  (void) opt;
}

void hexadecimalPrint(va_list ap, int * opt){
  (void) ap;
  (void) opt;
}
