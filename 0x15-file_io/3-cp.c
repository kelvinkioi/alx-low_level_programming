#include "main.h"
/**
 * main - program that copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int x, y;
	int z;
	char *buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	x = open(argv[1], O_RDONLY);
	y = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((z = read(x, buf, 1024)) > 0)
	{
		if (y == -1 || write(y, buf, z) != z)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(x) == -1 || close(y) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd -1\n");
		exit(100);
	}
	return (0);
}
