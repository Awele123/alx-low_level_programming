#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile- reads a text file,prints it to the POSIX standard output.
 * @filename: file
 * @letters: letter amount
 * Return: result
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *a;
	ssize_t r, b = 0, y;

	if (filename == NULL)
		return (0);
	r = open(filename, O_RDONLY);
	if (r == -1)
		return (0);
	a = malloc(sizeof(char) * letters);

	if (a == NULL)
	{
		close(r);
		return (0);
	}
	y = read(r, a, letters);
	b = write(STDOUT_FILENO, a, y);
	if (b == -1)
	{
		return (0);
	}
	free(a);
	close(r);
	return (b);
}
