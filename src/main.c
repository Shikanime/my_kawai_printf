#include "loader.h"

int main(int ac, char * av[]) {
    (void) ac;
    (void) av;

    int integerTest;
    long longTest;
    char charTest;
    char * stringTest;

    integerTest = 666;
    longTest = 3000000000;
    charTest = 'a';
    stringTest = "Mec ca marche aussi";
    
    my_printf("Integer: %d \nLong: %ld \nChar: %s\n String: %c\n Empty: %\n", integerTest, longTest, stringTest);

    return 0;
}
