#ifndef MY_PRINTF_APP_HELPER_H
#define MY_PRINTF_APP_HELPER_H

void        charPrintHelper                 (char c);
long int    stringLengthHelper              (const char * s);
void        stringPrintHelper               (const char * s);
void        integerPrintHelper              (int n);
void        unsignedIntegerPrintHelper      (unsigned int n);
void	    addressPrintHelper              (long long n);
void        hexadecimalPrintHelper          (long long n);
void        hexadecimalCapitalPrintHelper   (long long n);
void	    signedOctalPrintHelper          (int n);

#endif //MY_PRINTF_APP_HELPER
