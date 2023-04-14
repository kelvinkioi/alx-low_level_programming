#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * is_digit - checks if a string contains only digits
 * @s: pointer to a string
 * Return: 0 success 1 otherwise
 */
int is_digit(char *s)
{
	while (*s)
	{
	if (!isdigit(*s))
	return (0);
	s++;
	}
	return (1);
}
/**
 * mul - multiplies two integers
 * @num1: string
 * @num2: string
 * Return: pproduct of a and b
 */
int mul(char *num1, char *num2)
{
	int a;
	int b;

	a = atoi(num1);
	b = atoi(num2);
	return (a * b);
}
/**
 * main - entry point
 * @argc: integer
 * @argv: array of strings
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	char *num1;
	char *num2;
	int answer;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];
	if (!is_digit(num1) || !is_digit(num2))
	{
		printf("Error\n");
		exit(98);
	}
	answer = mul(num1, num2);
	printf("%d\n", answer);
	return (0);
}



