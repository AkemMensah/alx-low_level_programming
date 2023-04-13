#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, lenA = 0, lenB = 0;

	while (s1 && s1[lenA])
		lenA++;
	while (s2 && s2[lenB])
		lenB++;

	if (n < lenB)
		str = malloc(sizeof(char) * (lenA + n + 1));
	else
		str = malloc(sizeof(char) * (lenA + lenB + 1));

	if (!str)
		return (NULL);

	while (i < lenA)
	{
		str[i] = s1[i];
		i++;
	}

	while (n < lenB && i < (lenA + n))
		str[i++] = s2[j++];

	while (n >= lenB && i < (lenA + lenB))
		str[i++] = s2[j++];

	str[i] = '\0';

	return (str);
}
