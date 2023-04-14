#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum value in the array
 * @max: maximum value in the array
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *pt;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pt = malloc(sizeof(int) * size);

	if (pt == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		pt[i] = min++;

	return (pt);
}
