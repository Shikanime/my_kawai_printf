#include "loader.h"

int main(int ac, char **av) {
    (void) ac;
    (void) av;
    int integerTest;
    long longTest;
    char charTest;
    
    integerTest = 666;
    longTest = 3000000000;
    
    my_printf("Integer: %d \n Long: %ld \n Char: %c", integerTest, longTest, charTest);

    return EXIT_SUCCESS
}
