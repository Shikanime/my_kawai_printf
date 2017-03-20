#ifndef MY_PRINTF_RULLES_PRINT_H
#define MY_PRINTF_RULLES_PRINT_H

void integerPrint();
void longPrint();
void charPrint();
void stringPrint();
void pointerPrint();
void shortPrint();
void hexadecimalPrint();

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
