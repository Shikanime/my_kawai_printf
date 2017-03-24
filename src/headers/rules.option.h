/*
   rules.option.h for my_printf in /home/asuramaru/Project/print/phetsi_w/src

   Made by PHETSINORATH William
   Login   <phetsi_w@etna-alternance.net>

   Started on  Fri Mar 24 14:39:04 2017 PHETSINORATH William
   Last update Fri Mar 24 14:39:09 2017 PHETSINORATH William
*/

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
