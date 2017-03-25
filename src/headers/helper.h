/*
   helper.h for my_printf in /home/asuramaru/Project/print/phetsi_w/src

   Made by PHETSINORATH William
   Login   <phetsi_w@etna-alternance.net>

   Started on  Fri Mar 24 14:38:21 2017 PHETSINORATH William
   Last update Fri Mar 24 14:38:27 2017 PHETSINORATH William
*/

#ifndef MY_PRINTF_HELPER_H
#define MY_PRINTF_HELPER_H

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

#endif //MY_PRINTF_HELPER
