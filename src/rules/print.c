#include "headers/loader.h"

/* Internal prototype */

void integerPrint();
void longPrint();
void charPrint();
void stringPrint();
void pointerPrint();
void shortPrint();
void hexadecimalPrint();

/* Usable functions */

void (*print[])(var_list ap, char* opt) = {
   integerPrint,
   longPrint,
   charPrint,
   stringPrint,
   pointerPrint,
   shortPrint,
   hexadecimalPrint
};

/* Local functions */

void integerPrint(var_list ap, char* opt){
  integerPrintHelper(var_arg(ap, int));
}

void longPrint(var_list ap, char* opt){
}

void charPrint(var_list ap, char* opt){
  charPrintHelper(var_arg(ap, char));
}

void stringPrint(var_list ap, char* opt){
  stringPrintHelper(var_arg(ap, string));
}

void pointerPrint(var_list ap, char* opt){
}

void shortPrint(var_list ap, char* opt){
}

void hexadecimalPrint(var_list ap, char* opt){
}
