#include "loader.h"

int main(int ac, char * av[]) {
    (void) ac;
    (void) av;

    my_printf("Integer: %d \nLong: %ld \nChar: %c\n String: %s\n Empty: %\n", 666, 3000000000, 'a', "ca marche ici");

    return 0;
}
