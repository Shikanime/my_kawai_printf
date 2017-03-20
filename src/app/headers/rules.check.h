#ifndef MY_PRINTF_RULLES_CHECK_H
#define MY_PRINTF_RULLES_CHECK_H

bool integerCheck();
bool longCheck();
bool charCheck();
bool stringCheck();
bool pointerCheck();
bool shortCheck();
bool hexadecimalCheck();

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
