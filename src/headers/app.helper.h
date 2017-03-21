#ifndef MY_PRINTF_APP_HELPER_H
#define MY_PRINTF_APP_HELPER_H

// Variable definitions
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#define EXIT_NEUTRE

// Type definitions
typedef enum {
    false,
    true
} bool;

typedef char* string;

// Functions

extern long int stringLengthHelper(string s);
extern void     charPrintHelper(const char c);
extern void     stringPrintHelper(const string s);
extern void     integerPrintHelper(int n);

#endif //MY_PRINTF_APP_HELPER
