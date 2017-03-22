#ifndef MY_PRINTF_APP_HELPER_H
#define MY_PRINTF_APP_HELPER_H

void        charPrintHelper                         (char c);
long int    stringLengthHelper                      (const char * s);
void        stringPrintHelper                       (const char * s);
void        integerPrintHelper                      (int n);
void        unsignedIntegerPrintHelper              (unsigned int n);
void	    addressPrintHelper                      (unsigned long long n);
void        unsignedHexadecimalPrintHelper          (unsigned long long n);
void        unsignedHexadecimalCapitalPrintHelper   (unsigned long long n);
void	    unsignedOctalPrintHelper                (signed int n);

#endif //MY_PRINTF_APP_HELPER
