#ifndef MY_PRINTF_LOADER_H
#define MY_PRINTF_LOADER_H

/* GLOBAL DECLARATION */

// Variable definitions
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#define EXIT_NEUTRE

// Type definitions
typedef enum {
    false,
    true
} bool;

typedef char* string;

/* PROJECT LIBRARIES */

#include <stdarg.h>
#include <unistd.h>

/* PROJECT FILES */

// Rules
#include "headers/rules.check.h"
#include "headers/rules.option.h"
#include "headers/rules.print.h"

// 
#include "headers/app.my_printf.h"
#include "headers/app.helper.h"

#endif //MY_PRINTF_LOADER
