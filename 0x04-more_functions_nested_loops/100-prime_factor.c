#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 success
 */

int main(void)
{
	long int n = 612852475143;
	long int largest = 0;
	long int i;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			if (i > largest)
			{
				largest = i;
			}
		n = n / i;
		}
	}

	printf("%ld\n", largest);
	return (0);
}

