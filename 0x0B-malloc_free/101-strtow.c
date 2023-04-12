#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function that counts the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int flg, c, z;

	flg = 0;
	z = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flg = 0;
		else if (flg == 0)
		{
			flg = 1;
			z++;
		}
	}

	return (z);
}

/**
 ***strtow - splits a string into words
 * @str: string to be splited
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, j = 0, len = 0, words, d = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (d)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (d + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - d;
				j++;
				d = 0;
			}
		}
		else if (d++ == 0)
			start = i;
	}

	matrix[j] = NULL;

	return (matrix);
}
