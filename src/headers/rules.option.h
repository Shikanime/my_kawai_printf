#ifndef MY_PRINTF_RULLES_OPTION_H
#define MY_PRINTF_RULLES_OPTION_H

/* Helpers */

#define OPTION_NUMBER 1

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

/* Usable functions */

int (*option[OPTION_NUMBER])(const char * query, int n, int * opt);

/* Internal functions */

int longOption(const char * query, int n, int * opt);

#endif //MY_PRINTF_RULLES_OPTION
