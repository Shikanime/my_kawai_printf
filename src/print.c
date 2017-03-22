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
  (void) opt;
  (void) query;
    integerPrintHelper(va_arg(ap, int));
    }

void longPrint(char * query, va_list ap, int * opt){
  (void) ap;
  (void) query;
  (void) opt;}

void charPrint(char * query, va_list ap, int * opt){
 
  (void) query;
  (void) opt;  stringPrintHelper(va_arg(ap, char*));
}

void stringPrint(char * query, va_list ap, int * opt){ 
  (void) opt;
  (void) query;
  stringPrintHelper(va_arg(ap, char*));
}

void pointerPrint(char * query, va_list ap, int * opt){
  (void) ap;
  (void) query;
  (void) opt;}

void shortPrint(char * query, va_list ap, int * opt){
  (void) ap;
  (void) query;
  (void) opt;}

void hexadecimalPrint(char * query, va_list ap, int * opt){
  (void) ap;
  (void) query;
  (void) opt;}
