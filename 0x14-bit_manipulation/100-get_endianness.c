#include "main.h"

/**
 * get_endianness - checks if a machine  has little or big endian
 * Return: 0 on big, 1 on little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *k = (char *) &i;

	return (*k);
}

