#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: NULL if argument count or vector equals zero
 * also returns the string s
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j;
	int k;
	int length = 0;
	char *s;
	int x = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		length += strlen(av[i]) + 1;
		i++;
	}
	s = (char *) malloc(sizeof(char) * (length + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		k = strlen(av[i]);
		j = 0;
		while (j < k)
		{
			s[x++] = av[i][j];
			j++;
		}
		s[x++] = '\n';
		i++;
	}
	s[x] = '\0';
	return (s);
}
