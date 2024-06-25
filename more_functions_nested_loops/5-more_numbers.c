#include "main.h"

/**
 * more_numbers - print 10x les nombres de 0 à 14 suivis d'une nouvelle ligne
 */

void more_numbers(void)
{
	int i, j;
	char buffer[3];

for (i = 0; i < 10; i++)
	{

	for (j = 0; j <= 14; j++)
	{
	if (j >= 10)
		{
		buffer[0] = '1';
		buffer[1] = '0' + (j % 10);
		buffer[2] = '\0';
		_putchar(buffer[0]);
		_putchar(buffer[1]);
		}
		else
		{
		buffer[0] = '0' + j;
		buffer[1] = '\0';

		}
	}
	_putchar('\n');
	}
}
