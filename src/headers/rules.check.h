#ifndef MY_PRINTF_RULLES_CHECK_H
#define MY_PRINTF_RULLES_CHECK_H

int (*check[7])             (va_list ap, const char * query, unsigned int n);
int integerCheck            (va_list ap, const char * query, unsigned int n);
int longCheck               (va_list ap, const char * query, unsigned int n);
int charCheck               (va_list ap, const char * query, unsigned int n);
int stringCheck             (va_list ap, const char * query, unsigned int n);
int pointerCheck            (va_list ap, const char * query, unsigned int n);
int shortCheck              (va_list ap, const char * query, unsigned int n);
int hexadecimalCheck        (va_list ap, const char * query, unsigned int n);

#endif //MY_PRINTF_RULLES_CHECK
