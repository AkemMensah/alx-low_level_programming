#include "main.h"

/**
 * _isupper - checks for digit
 * @c: charactor to be tested
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return  (1);
	}

	return (0);
}
