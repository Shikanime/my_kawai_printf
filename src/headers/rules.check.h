#ifndef MY_PRINTF_RULLES_CHECK_H
#define MY_PRINTF_RULLES_CHECK_H

bool integerCheck       (const string query, int n);
bool longCheck          (const string query, int n);
bool charCheck          (const string query, int n);
bool stringCheck        (const string query, int n);
//bool pointerCheck       (const string query, int n);
bool shortCheck         (const string query, int n);
//bool hexadecimalCheck   (const string query, int n);

bool (*check[])(const string query, int i) = {
   integerCheck,
   longCheck,
   charCheck,
   stringCheck,
   shortCheck
};

#endif //MY_PRINTF_RULLES_CHECK
