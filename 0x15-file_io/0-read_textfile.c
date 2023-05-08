#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: pointer to the name of the file
 * @letters: number of letters to read
 *
 * Return: w - actual number of bytes read and printed,
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t v;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	v = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, v);

	free(buff);
	close(fd);
	return (w);
}
