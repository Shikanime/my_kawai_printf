#include "loader.h"

int main(int ac, char * av[]) {
    (void) ac;
    (void) av;
	my_printf("1 - une chaine\n");
	my_printf("2 - %s\n", "une autre chaine");
	my_printf("3 - %i\n", 42);
	my_printf("4 - %s %d %s%c", "avec", 4, "parametres", '\n');

	my_printf("1 - %o\n", 42);
	my_printf("2 - %u\n", (unsigned int)4200000000);
	my_printf("3 - %x\n", 42);
	my_printf("4 - %X\n", 42);
	my_printf("3 - %x\n", -42);
	my_printf("4 - %X\n", -42);
	my_printf("5 - %d%%\n", -42);
}