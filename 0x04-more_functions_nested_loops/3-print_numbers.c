#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 * Return the numbers from 0 up to 0
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
