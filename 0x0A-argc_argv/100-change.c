#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: integer argument count
 * @argv: array of strings
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int cents;
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	}
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		change = change + 1;
	}
	printf("%d\n", change);
	return (0);
}
