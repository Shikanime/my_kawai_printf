#ifndef MY_PRINTF_RULLES_CHECK_H
#define MY_PRINTF_RULLES_CHECK_H

#include "app.helper.h"

extern int integerCheck        (const char * query, int n);
extern int longCheck           (const char * query, int n);
extern int charCheck           (const char * query, int n);
extern int stringCheck         (const char * query, int n);
extern int pointerCheck        (const char * query, int n);
extern int shortCheck          (const char * query, int n);
extern int hexadecimalCheck    (const char * query, int n);

extern int (*check[])(const char * query, int i) = {
   integerCheck,
   longCheck,
   stringCheck,
   stringCheck,
   pointerCheck,
   shortCheck,
   hexadecimalCheck
};

#endif //MY_PRINTF_RULLES_CHECK
