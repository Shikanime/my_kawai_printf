#ifndef MY_PRINTF_RULLES_CHECK_H
#define MY_PRINTF_RULLES_CHECK_H

bool integerCheck       (void);
bool longCheck          (void);
bool charCheck          (void);
bool stringCheck        (void);
bool pointerCheck       (void);
bool shortCheck         (void);
bool hexadecimalCheck   (void);

bool (*check[])(const string query, int i) = {
   integerCheck,
   longCheck,
   charCheck,
   stringCheck,
   pointerCheck,
   shortCheck,
   hexadecimalCheck
};

#endif //MY_PRINTF_RULLES_CHECK
