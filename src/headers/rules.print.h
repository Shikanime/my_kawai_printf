#ifndef MY_PRINTF_RULLES_PRINT_H
#define MY_PRINTF_RULLES_PRINT_H

void integerPrint       (int ap, char* opt);
void longPrint          (long ap, char* opt);
void charPrint          (char ap, char* opt);
void stringPrint        (string ap, char* opt);
//void pointerPrint       (?? ap, char* opt);
void shortPrint         (short ap, char* opt);
//void hexadecimalPrint   (?? ap, char* opt);

void (*print[])(var_list ap, char* opt) = {
   integerPrint,
   longPrint,
   charPrint,
   stringPrint,
   shortPrint
};

#endif //MY_PRINTF_RULLES_PRINT
