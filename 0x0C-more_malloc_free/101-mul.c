#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_digit(char* s)
{
	while (*s)
	{
	if (!isdigit(*s))
	return 0;
	s++;
	}
	return 1;
}
int mul(char * num1, char * num2)
{
	int a;
	int b;
	a = atoi(num1);
	b = atoi(num2);
	return (a * b);
}
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
	if(!is_digit(num1) || !is_digit(num2))
	{
		printf("Error\n");
		exit(98);
	}
	answer = mul(num1, num2);
	printf("%d\n", answer);
	return (0);
}



