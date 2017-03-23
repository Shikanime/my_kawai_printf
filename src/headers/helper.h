#ifndef MY_PRINTF_APP_HELPER_H
#define MY_PRINTF_APP_HELPER_H

/* Helpers */

#include <unistd.h>

/* Usage functions */

void        charPrintHelper                 (char c);
long int    stringLengthHelper              (const char * s);
void        stringPrintHelper               (const char * s);
void        integerPrintHelper              (int n);
void        unsignedIntegerPrintHelper      (unsigned int n);
void	    addressHexadecimalPrintHelper   (unsigned int n, int i);
void	    addressPrintHelper              (unsigned int n);
void        hexadecimalPrintHelper          (unsigned int n);
void        hexadecimalCapitalPrintHelper   (unsigned int n);
void	    octalPrintHelper                (unsigned int n);

#endif //MY_PRINTF_APP_HELPER
