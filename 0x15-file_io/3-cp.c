#include "main.h"

char *make_buf(char *file);
void close_descriptor(int fd);

/**
 * make_buf: function allocates 1024 buts to a buffer
 * @file: the filename
 * Return: Pointer
 */

char *make_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Cannot write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_descriptor - program to close file descriptor.
 * @fdis: descriptor for closing
 */

void close_descriptor(int fdis)
{
	int clo;

	clo = close(fdis);

	if (clo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close fdis %d\n", fdis);
		exit(100);
	}
}

/**
 * main - program that copies the content of a file to another file.
 * @argc: argument count
 * @argv: Pointer arryay
 * Return: result
 * Description: If the argument number not correct - exit code 97.
 * whike file_home does not exist or cannot be read - exit code 98.
 * while file_go cannot be created or written to - exit code 99.
 * while file_go or file_hom cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int home, go, v, z;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = make_buf(argv[2]);
	home = open(argv[1], O_RDONLY);
	v = read(home, buf, 1024);
	go = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (home == -1 || v == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Cannot read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		z = write(go, buf, v);
		if (go == -1 || z == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Cannot write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		v = read(home, buf, 1024);
		go = open(argv[2], O_WRONLY | O_APPEND);

	} while (v > 0);

	free(buf);
	close_descriptor(home);
	close_descriptor(go);

	return (0);
}
