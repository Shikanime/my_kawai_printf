#ifndef MY_PRINTF_RULLES_CHECK_H
#define MY_PRINTF_RULLES_CHECK_H

#include "app.helper.h"

extern bool integerCheck       (const char * query, int n);
extern bool longCheck          (const char * query, int n);
extern bool charCheck          (const char * query, int n);
extern bool char *Check        (const char * query, int n);
extern bool pointerCheck       (const char * query, int n);
extern bool shortCheck         (const char * query, int n);
extern bool hexadecimalCheck   (const char * query, int n);

extern bool (*check[])(const char * query, int i) = {
   integerCheck,
   longCheck,
   charCheck,
   char *Check,
   pointerCheck,
   shortCheck,
   hexadecimalCheck
};

#endif //MY_PRINTF_RULLES_CHECK
