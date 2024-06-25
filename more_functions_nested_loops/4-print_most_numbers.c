#include "main.h"

/**
 * print_most_numbers - imprime 0 à 9 sauf 2 et 4 suivi d'une nouvelle ligne
 */

void print_most_numbers(void)
{
	char numbers[] = "01356789\n";
	char *ptr = numbers;

	while (*ptr)
	{
	_putchar(*ptr);
	ptr++;
	}
}
