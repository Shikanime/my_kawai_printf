#ifndef MY_PRINTF_RULLES_PRINT_H
#define MY_PRINTF_RULLES_PRINT_H

void integerPrint       (va_list ap, char* opt);
void longPrint          (va_list ap, char* opt);
void charPrint          (va_list ap, char* opt);
void stringPrint        (va_list ap, char* opt);
void pointerPrint       (va_list ap, char* opt);
void shortPrint         (va_list ap, char* opt);
void hexadecimalPrint   (va_list ap, char* opt);

void (*print[])(va_list ap, char* opt) = {
   integerPrint,
   longPrint,
   charPrint,
   stringPrint,
   pointerPrint,
   shortPrint,
   hexadecimalPrint
};

#include "app.helper.h"

#endif //MY_PRINTF_RULLES_PRINT
