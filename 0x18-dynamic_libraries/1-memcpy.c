#include "main.h"

/**
 **_memcpy - copies the memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: number of bytes to be copied
 *
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
