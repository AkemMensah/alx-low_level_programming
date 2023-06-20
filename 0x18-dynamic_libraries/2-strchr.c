#include "main.h"
#include <stdio.h>

/**
 **_strchr - locates a character in a string
 * @str: string to be searched
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string str, or NULL if character not found
 */
char *_strchr(char *str, char c)
{
		int i;

		while (1)
		{
			i = *str++;
			if (i == c)
			{
				return (str - 1);
			}
			if (i == 0)
			{
				return (NULL);
			}
		}
}
