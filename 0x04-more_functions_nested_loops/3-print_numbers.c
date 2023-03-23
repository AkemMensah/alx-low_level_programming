#include "main.h"

/**
 * prints the numbers, from 0 to 9, followed by a new line
 * Return nothing
 */

void print_numbers(void)
{
	int n;
	
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
