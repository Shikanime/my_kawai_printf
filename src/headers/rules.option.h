#ifndef MY_PRINTF_RULLES_OPTION_H
#define MY_PRINTF_RULLES_OPTION_H

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

int (*option[OPTION_NUMBER])(const char * query, int n, int * opt);
int longOption(const char * query, int n, int * opt);

#endif //MY_PRINTF_RULLES_OPTION
