#include "main.h"

/**
 **_strspn - gets the length of a prefix substring
 * @str: string to evaluate
 * @box: string containing the list of characters to match str
 *
 * Return: the number of bytes in the initial segment
 * of str which consist of bytes only from box
 */
unsigned int _strspn(char *str, char *box)
{
	int i, j, k, deg;

	k = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		deg = 0;
		for (j = 0; box[j] != '\0'; j++)
		{
			if (str[i] == box[j])
			{
				k++;
				deg = 1;
			}
		}
		if (deg == 0)
		{
			return (k);
		}
	}

	return (0);
}
