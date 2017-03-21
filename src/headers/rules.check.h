#ifndef MY_PRINTF_RULLES_CHECK_H
#define MY_PRINTF_RULLES_CHECK_H

extern bool integerCheck       (const string query, int n);
extern bool longCheck          (const string query, int n);
extern bool charCheck          (const string query, int n);
extern bool stringCheck        (const string query, int n);
extern bool pointerCheck       (const string query, int n);
extern bool shortCheck         (const string query, int n);
extern bool hexadecimalCheck   (const string query, int n);

extern bool (*check[])(const string query, int i) = {
   integerCheck,
   longCheck,
   charCheck,
   stringCheck,
   pointerCheck,
   shortCheck,
   hexadecimalCheck
};

#endif //MY_PRINTF_RULLES_CHECK
