#ifndef MY_PRINTF_LOADER_H
#define MY_PRINTF_LOADER_H

/* GLOBAL DECLARATION */

// Variable definitions
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#define VOID ;

// Type definitions
typedef enum {
    false,
    true
} bool;

typedef char*   string;

/* PROJECT LIBRARIES */

#include <stdarg.h>
#include <unistd.h>

/* PROJECT HEADERS */

#include "my_printf.h"

#endif //MY_PRINTF_LOADER