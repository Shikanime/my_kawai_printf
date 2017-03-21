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

// Functions

extern long int char *LengthHelper(char * s);
extern void     charPrintHelper(const char c);
extern void     char *PrintHelper(const char * s);
extern void     integerPrintHelper(int n);

#endif //MY_PRINTF_APP_HELPER
