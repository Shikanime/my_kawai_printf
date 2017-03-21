#ifndef MY_PRINTF_RULLES_PRINT_H
#define MY_PRINTF_RULLES_PRINT_H

extern void integerPrint       (va_list ap, char* opt);
extern void longPrint          (va_list ap, char* opt);
extern void charPrint          (va_list ap, char* opt);
extern void stringPrint        (va_list ap, char* opt);
extern void pointerPrint       (va_list ap, char* opt);
extern void shortPrint         (va_list ap, char* opt);
extern void hexadecimalPrint   (va_list ap, char* opt);

extern void (*print[])(va_list ap, char* opt) = {
   integerPrint,
   longPrint,
   charPrint,
   stringPrint,
   pointerPrint,
   shortPrint,
   hexadecimalPrint
};

#endif //MY_PRINTF_RULLES_PRINT
