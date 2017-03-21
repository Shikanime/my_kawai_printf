#ifndef MY_PRINTF_RULLES_PRINT_H
#define MY_PRINTF_RULLES_PRINT_H

void (*print[7])            (va_list * ap, char * query, int * opt);
void integerPrint           (va_list * ap, char * query, int * opt);
void longPrint              (va_list * ap, char * query, int * opt);
void charPrint              (va_list * ap, char * query, int * opt);
void stringPrint            (va_list * ap, char * query, int * opt);
void pointerPrint           (va_list * ap, char * query, int * opt);
void shortPrint             (va_list * ap, char * query, int * opt);
void hexadecimalPrint       (va_list * ap, char * query, int * opt);

#endif //MY_PRINTF_RULLES_PRINT
