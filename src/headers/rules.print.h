#ifndef MY_PRINTF_RULLES_PRINT_H
#define MY_PRINTF_RULLES_PRINT_H

#define PROCESS_NUMBER 8

void (*print[PROCESS_NUMBER])   (va_list ap, int * opt);
void escapePrint                (va_list ap, int * opt);
void integerPrint               (va_list ap, int * opt);
void charPrint                  (va_list ap, int * opt);
void stringPrint                (va_list ap, int * opt);
void pointerPrint               (va_list ap, int * opt);
void hexadecimalPrint           (va_list ap, int * opt);

#endif //MY_PRINTF_RULLES_PRINT
