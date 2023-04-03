#include "main.h"
#include <stdio.h>

/**
 **_strpbrk - searches a string for any set of bytes
 * @str: string to be searched
 * @box: string containing the bytes to look for
 *
 * Return: pointer to the byte in str that matches
 * one of the bytes in box
 * or NULL if no such byte is found
 */
char *_strpbrk(char *str, char *box)
{
	int i, j;

	for (i = 0; *str != '\0'; i++)
	{
		for (j = 0; box[j] != '\0'; j++)
		{
			if (*str == box[j])
			{
				return (str);
			}
		}
		str++;
	}

	return (NULL);
}
