#ifndef MY_PRINTF_RULLES_PRINT_H
#define MY_PRINTF_RULLES_PRINT_H

void integerPrint       (void);
void longPrint          (void);
void charPrint          (void);
void stringPrint        (void);
void pointerPrint       (void);
void shortPrint         (void);
void hexadecimalPrint   (void);

void (*print[])(var_list ap, char* opt) = {
   integerPrint,
   longPrint,
   charPrint,
   stringPrint,
   pointerPrint,
   shortPrint,
   hexadecimalPrint
};

#endif //MY_PRINTF_RULLES_PRINT
