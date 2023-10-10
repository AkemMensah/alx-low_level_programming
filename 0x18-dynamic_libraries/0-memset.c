#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @t: memory area to be filled
 * @c: char to be copied
 * @n: number of times to copy c
 *
 * Return: pointer to the memory area t
 */
char *_memset(char *t, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		t[i] = c;
	}

	return (t);
}
