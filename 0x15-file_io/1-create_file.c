#include "main.h"
/**
 * create_file -  function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fi, i;

	if (!filename)
	{
		return (-1);
	}
	fi = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	for (i = 0; text_content && text_content[i]; i++)
	{
		if (write(fi, &text_content[i], 1) < 0)
			return (-1);
	}
	close(fi);
	return (1);
}
