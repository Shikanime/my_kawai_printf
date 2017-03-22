#ifndef MY_PRINTF_RULLES_PROCESS_H
#define MY_PRINTF_RULLES_PROCESS_H

#define PROCESS_NUMBER 8

int (*process[PROCESS_NUMBER])  (const char * query, int n, va_list ap, int * opt);
int escapeProcess               (const char * query, int n, va_list ap, int * opt);
int integerProcess              (const char * query, int n, va_list ap, int * opt);
int charProcess                 (const char * query, int n, va_list ap, int * opt);
int stringProcess               (const char * query, int n, va_list ap, int * opt);
int pointerProcess              (const char * query, int n, va_list ap, int * opt);
int hexadecimalProcess          (const char * query, int n, va_list ap, int * opt);
int octalProcess                (const char * query, int n, va_list ap, int * opt);
int unsignedIntegerProcess      (const char * query, int n, va_list ap, int * opt);

#endif //MY_PRINTF_RULLES_PROCESS
