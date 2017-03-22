#include "loader.h"

int main(int ac, char * av[]) {
    (void) ac;
    (void) av;

    int integerTest;
    long longTest;
    char stringTest[20] = "bite";

    integerTest = 666;
    longTest = 3000000000;
    
    my_printf("Integer: %d \nLong: %ld \nChar: %s\n Empty: %\n", integerTest, longTest, stringTest);

    return 0;
}
