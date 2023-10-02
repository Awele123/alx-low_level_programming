#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: filename pointer
 * @text_content: pointer
 * Return: result
 */

int create_file(const char *filename, char *text_content)
{
	int r, g, b, d = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (d = 0; text_content[d]; ++d)
		{
		}
	}

	r = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	b = write(r, text_content, d);
	if (r == -1 || b == -1)
		return (-1);
	for (g = 0; g < d; g++)
	{
		if (b == -1)
		{
			close(r);
			return (-1);
		}
	}

	close(r);

	return (1);
}

