#include "main.h"

/**
*print_most _numbers - prints numbers from 0 to 9
*Description: prins the numbers excluding 2 and 4
*Return: the numbers from 0 to 9
*/

void print_most_numbers(void)
{
	char c;


	for (c = '0'; c <= 9; c++)
	{
		if (!(c == '2' || c == '4'))
		{
		_putchar(c);
		}
	}
	_putchar('\n');
}
