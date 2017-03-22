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

int (*option[OPTION_NUMBER])(const char * query, unsigned int n, int * opt);
int longOption(const char * query, unsigned int n, int * opt);

#endif //MY_PRINTF_RULLES_OPTION
