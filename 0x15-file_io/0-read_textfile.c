#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t k;
	ssize_t l;
	ssize_t m;

	k = open(filename, O_RDONLY);

	if (k == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	m = read(k, buf, letters);
	l = write(STDOUT_FILENO, buf, m);

	free(buf);
	close(k);
	return (l);
}
