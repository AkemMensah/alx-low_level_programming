#include <unistd.h>

/**
 * _putchar - writes out the charcter c to stdout
 * @c: The character to print
 *
 * Return: 0 (success).
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
