#include "loader.h"

int main(int ac, char * av[]) {
    (void) ac;
    (void) av;

	my_printf("1 - une chaine\n");
	my_printf("2 - %s\n", "une autre chaine");
	my_printf("3 - %i\n", 42);
	my_printf("4 - %s %d %s%c", "avec", 4, "parametres", '\n');
    return 0;
}
