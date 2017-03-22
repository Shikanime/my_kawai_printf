#ifndef MY_PRINTF_APP_HELPER_H
#define MY_PRINTF_APP_HELPER_H

void        charPrintHelper                 (char c);
long int    stringLengthHelper              (const char * s);
void        stringPrintHelper               (const char * s);
void        integerPrintHelper              (int n);
void        unsignedIntegerPrintHelper      (unsigned int n);
void	    addressPrintHelper              (unsigned long long n);
void        HexadecimalPrintHelper          (unsigned long long n);
void        HexadecimalCapitalPrintHelper   (unsigned long long n);
void	    octalPrintHelper                (unsigned int n);

#endif //MY_PRINTF_APP_HELPER
