#include "main.h"


/**
 * _isupper - checks for upper/lower case
 * @c: charactor to be tested
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	return (0);
}
