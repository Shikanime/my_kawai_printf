#include "loader.h"

int main(int ac, char * av[]) {
    (void) ac;
    (void) av;

    my_printf("Integer: %d", 3);
    my_printf("Escape: %%");
    my_printf("Integer: %hd", 444444444444);
    my_printf("Char: %c", 'c');
    my_printf("String: %s", "c'est une string'");

    return 0;
}
