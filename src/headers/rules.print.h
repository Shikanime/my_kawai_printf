#ifndef MY_PRINTF_RULLES_PRINT_H
#define MY_PRINTF_RULLES_PRINT_H

#include "app.helper.h"

void integerPrint       (va_list ap, string opt);
void longPrint          (va_list ap, string opt);
void charPrint          (va_list ap, string opt);
void stringPrint        (va_list ap, string opt);
void pointerPrint       (va_list ap, string opt);
void shortPrint         (va_list ap, string opt);
void hexadecimalPrint   (va_list ap, string opt);

void (*print[])(va_list ap, string opt) = {
   integerPrint,
   longPrint,
   stringPrint,
   stringPrint,
   pointerPrint,
   shortPrint,
   hexadecimalPrint
};

#endif //MY_PRINTF_RULLES_PRINT
