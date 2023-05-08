#include "main.h"
/**
 * read_textfile -  function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: a pointer to the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fi, r, w;
	char *f;

	if (!filename)
		return (0);
	fi = open(filename, O_RDONLY);
	if (fi == -1)
		return (0);

	f = malloc(sizeof(char) * (letters));

	if (f == NULL)
	{
		return (0);
	}
	r = read(fi, f, letters);
	w = write(STDOUT_FILENO, f, r);
	free(f);
	close(fi);

	return (w);
}
