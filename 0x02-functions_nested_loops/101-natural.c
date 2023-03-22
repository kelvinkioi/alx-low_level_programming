#include <stdio.h>

/**
  * main - Prints the sum of all multiples of 3 or 5 up to 1024(excluded)
  *
  * Return: 0 (Success)
  */
int main(void)
{
	int x, z = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			z += x;
		}

		x++;
	}

	printf("%d\n", z);
	return (0);
}
