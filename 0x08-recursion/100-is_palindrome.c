#include "main.h"
#include <string.h>
/**
  * palindrome - find palidrome
  * @s: pointer to a string
  * @i: integer
  *
  * Return: 1if palindrome 0 if not
  */
int palindrome(char *s, int i)
{
	int len;

	len = strlen(s);
	if (*s == '\0')
		return (1);
	else if (*s == s[len - i])
		return (palindrome(s + 1, i + 1));
	else
		return (0);
}
/**
 * is_palindrome - function that checks if a string is palindrome
 * @s: pointer to a string s
 * Return: 1 if palindrome 0 if not
 */
int is_palindrome(char *s)
{
	return (palindrome(s, 1));
}
