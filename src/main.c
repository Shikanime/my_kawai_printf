#include "headers/my_printf.h"

int main(int ac, char * av[]) {
	(void) ac;
	(void) av;

	my_printf("Default - its a chain\n");
	my_printf("String - %s\n", "its an another chain");
	my_printf("Integer - %i\n", 42);
	my_printf("Mixed - %s %d %s%c", "with", 4, "parametres", '\n');
	my_printf("Octal - %o\n", 42);
	my_printf("Unisgned Integer - %u\n", (unsigned int)4200000000);
	my_printf("Hexadecimal - %x\n", 42);
	my_printf("Uppercase hexadecimal - %X\n", 42);
	my_printf("Negative hexadecimal - %x\n", -42);
	my_printf("Negative uppercase hexadecimal - %X\n", -42);
	my_printf("Mixed - %d%%\n", -42);
	my_printf("Address - %p\n",  42);
	my_printf("%% alone - % \n");
	my_printf("%% alone - %\n");
	my_printf("%");

	return 0;
}
