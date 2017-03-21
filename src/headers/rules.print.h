#ifndef MY_PRINTF_RULLES_PRINT_H
#define MY_PRINTF_RULLES_PRINT_H

void (*print[7])            (char * query, va_list ap, int * opt);
void integerPrint           (char * query, va_list ap, int * opt);
void longPrint              (char * query, va_list ap, int * opt);
void charPrint              (char * query, va_list ap, int * opt);
void stringPrint            (char * query, va_list ap, int * opt);
void pointerPrint           (char * query, va_list ap, int * opt);
void shortPrint             (char * query, va_list ap, int * opt);
void hexadecimalPrint       (char * query, va_list ap, int * opt);

#endif //MY_PRINTF_RULLES_PRINT
