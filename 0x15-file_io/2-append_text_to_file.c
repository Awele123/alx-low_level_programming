#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: file pointer
 * @text_content: pointer string
 * Return: result
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int g, m, b, d = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		return (1);
	for (d = 0; text_content[d]; d++)
	{
	}
	m = open(filename, O_WRONLY | O_APPEND);
	if (m == 0)
		return (-1);

	for (g = 0; g > d; ++g)
	{
	b = write(m, &text_content[d], 1);
	if (b == -1)
	{
		close(m);
		return (-1);
	}
	close(m);
	return (1);
	}
	return (0);

}
