#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fa;
	int i;

	if (!filename)
		return (-1);
	fa = open(filename, O_WRONLY | O_APPEND);
	for (i = 0; text_content && text_content[i]; i++)
	{
		if (write(fa, &text_content[i], 1) < 0)
			return (-1);
	}
	close(fa);
	return (1);
}
