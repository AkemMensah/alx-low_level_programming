#include "main.h"

/**
 * _isdigit - checks for digit character
 * @c: charactor to be tested
 * Return: 1 for a digit charactor or 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return  (1);
	}

	return (0);
}
