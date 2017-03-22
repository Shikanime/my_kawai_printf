#ifndef MY_PRINTF_RULLES_PROCESS_H
#define MY_PRINTF_RULLES_PROCESS_H

#define PROCESS_NUMBER 10

int (*process[PROCESS_NUMBER])  (const char * query, int n, int * opt, va_list * ap);
int escapeProcess               (const char * query, int n, int * opt, va_list * ap);
int integerProcess              (const char * query, int n, int * opt, va_list * ap);
int charProcess                 (const char * query, int n, int * opt, va_list * ap);
int stringProcess               (const char * query, int n, int * opt, va_list * ap);
int pointerProcess              (const char * query, int n, int * opt, va_list * ap);
int hexadecimalProcess          (const char * query, int n, int * opt, va_list * ap);
int octalProcess                (const char * query, int n, int * opt, va_list * ap);
int unsignedIntegerProcess      (const char * query, int n, int * opt, va_list * ap);
int floatPointProcess           (const char * query, int n, int * opt, va_list * ap);
int doublePrecisionProcess      (const char * query, int n, int * opt, va_list * ap);

#endif //MY_PRINTF_RULLES_PROCESS
