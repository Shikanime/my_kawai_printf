#include "headers/loader.h"

// Integer
void    interger_process(va_list ap) {
    nbr_print(var_arg(ap, int));
}