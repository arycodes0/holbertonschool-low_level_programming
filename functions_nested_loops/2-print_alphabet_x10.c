#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10
 * times in lowercase, followed by a new line
 * Return: 0 success
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 97 ; j < 123 ; j++)
			_putchar(j);

		_putchar('\n');
	}

}
