#include "loader.h"

int main(int ac, char * av[]) {
    (void) ac;
    (void) av;

    // Single
    my_printf("Integer: %d", 3);
    my_printf("Escape: %%");
    my_printf("Long: %hd", 444);
    my_printf("Char: %c", 'c');
    my_printf("String: %s", "cest une string");

    // All
    my_printf("Integer: %d | Escape: %% | Long: %hd | Char: %c | String: %s", 3, 444, 'c', "cest une string");

    return 0;
}
