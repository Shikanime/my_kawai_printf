#ifndef MY_PRINTF_RULLES_CHECK_H
#define MY_PRINTF_RULLES_CHECK_H

int integerCheck        (const char * query, int n);
int longCheck           (const char * query, int n);
int charCheck           (const char * query, int n);
int stringCheck         (const char * query, int n);
int pointerCheck        (const char * query, int n);
int shortCheck          (const char * query, int n);
int hexadecimalCheck    (const char * query, int n);

int (*check[])(const char * query, int i) = {
   integerCheck,
   longCheck,
   stringCheck,
   stringCheck,
   pointerCheck,
   shortCheck,
   hexadecimalCheck
};

#endif //MY_PRINTF_RULLES_CHECK
