#ifndef MY_PRINTF_RULLES_PRINT_H
#define MY_PRINTF_RULLES_PRINT_H

void integerPrint       (var_list ap, char* opt);
void longPrint          (var_list ap, char* opt);
void charPrint          (var_list ap, char* opt);
void stringPrint        (var_list ap, char* opt);
void pointerPrint       (var_list ap, char* opt);
void shortPrint         (var_list ap, char* opt);
void hexadecimalPrint   (var_list ap, char* opt);

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
