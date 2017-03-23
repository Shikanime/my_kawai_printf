#ifndef MY_PRINTF_RULLES_PROCESS_H
#define MY_PRINTF_RULLES_PROCESS_H

/* Helpers */

#define PROCESS_NUMBER 10

enum {
    flagsMod,
    widthMod,
    precisionMod,
    lenghtMod,
    typeMod
};

enum {
    longIntLenght,
    shortIntLenght,
    longDoubleLenght
};

#include <stdarg.h>

/* Usable functions */

int (*process[PROCESS_NUMBER])  (const char * query, int n, int * opt, va_list * ap);

/* Internal functions */

int escapeProcess               (const char * query, int n, int * opt, va_list * ap);
int integerProcess              (const char * query, int n, int * opt, va_list * ap);
int charProcess                 (const char * query, int n, int * opt, va_list * ap);
int stringProcess               (const char * query, int n, int * opt, va_list * ap);
int pointerProcess              (const char * query, int n, int * opt, va_list * ap);
int hexadecimalProcess          (const char * query, int n, int * opt, va_list * ap);
int octalProcess                (const char * query, int n, int * opt, va_list * ap);
int unsignedIntegerProcess      (const char * query, int n, int * opt, va_list * ap);
int floatPointProcess           (const char * query, int n, int * opt, va_list * ap);
int doublePrecisionProcess      (const char * query, int n, int * opt, va_list * ap);

/* External functions */

void        charPrintHelper                 (char c);
long int    stringLengthHelper              (const char * s);
void        stringPrintHelper               (const char * s);
void        integerPrintHelper              (int n);
void        unsignedIntegerPrintHelper      (unsigned int n);
void	    addressPrintHelper              (unsigned int n);
void        hexadecimalPrintHelper          (unsigned int n);
void        hexadecimalCapitalPrintHelper   (unsigned int n);
void	    octalPrintHelper                (unsigned int n);

#endif //MY_PRINTF_RULLES_PROCESS
