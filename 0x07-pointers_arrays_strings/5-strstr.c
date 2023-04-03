#include "main.h"
#include <stdio.h>

/**
 **_strstr - locates a substring
 * @haystack: string to search be in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int j, k;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (k = 0; needle[k] != '\0'; k++)
		{
			if (haystack[j + k] != needle[k])
				break;
		}
		if (!needle[k])
			return (&haystack[j]);
	}
	return (NULL);
}
