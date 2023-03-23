#include "main.h"

/**
 * prints the numbers, from 0 to 9, followed by a new line
 * Return nothing
 */

void print_numbers(void)
{
	int n;
	
	for (n = 0; n <= 9; n++)
	{
		putchar(n + 0);
	}
	_putchar('\n');
}
