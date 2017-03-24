/*
   rules.option.c for my_printf in /home/asuramaru/Project/print/phetsi_w/src

   Made by PHETSINORATH William
   Login   <phetsi_w@etna-alternance.net>

   Started on  Fri Mar 24 14:37:31 2017 PHETSINORATH William
   Last update Fri Mar 24 14:37:38 2017 PHETSINORATH William
*/

#include "headers/rules.option.h"

/* Usable functions */

int (*option[OPTION_NUMBER])(const char * query, int n, int * opt) = {
    longOption
};

/* Internal functions */

int longOption(const char * query, int n, int * opt) {
    if (query[n] == 'h' && query[n + 1] != '\0') {
        opt[lenghtMod] = 1;
        return 1;
    }
    return 0;
}
