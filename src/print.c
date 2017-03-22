#include "loader.h"

/* Usable functions */

void (*print[PROCESS_NUMBER])(va_list ap, int * opt) = {
   escapePrint,
   integerPrint,
   longPrint,
   charPrint,
   stringPrint,
   pointerPrint,
   shortPrint,
   hexadecimalPrint
};

/* Local functions */

void escapePrint(va_list ap, int * opt){
  (void) ap;
  (void) opt;
  charPrintHelper('%');
  stringPrintHelper("ici");
}

void integerPrint(va_list ap, int * opt){
  (void) opt;
  integerPrintHelper(va_arg(ap, int));
}

void longPrint(va_list ap, int * opt){
  (void) ap;
  (void) opt;
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

void shortPrint(va_list ap, int * opt){
  (void) ap;
  (void) opt;
}

void hexadecimalPrint(va_list ap, int * opt){
  (void) ap;
  (void) opt;
}
