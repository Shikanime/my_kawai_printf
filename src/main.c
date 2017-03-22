#include "loader.h"

int main(int ac, char * av[]) {
    (void) ac;
    (void) av;

    // Single
    // VALIDATED my_printf("Integer: %d", 3);
    // VALIDATED my_printf("Escape: %%");
    // REVIEW my_printf("Long: %hd", 444);
    // VALIDATED my_printf("Char: %c", 'c');
    my_printf("Hex: %x", 3939);
    my_printf("Octal: %o", 139);
    my_printf("Octal: %o", 1);
    my_printf("String: %s", "cest une string");

    // All
    my_printf("Integer: %d | Escape: %% | Long: %hd | Char: %c | String: %s", 3, 444, 'c', "cest une string");

    return 0;
}
