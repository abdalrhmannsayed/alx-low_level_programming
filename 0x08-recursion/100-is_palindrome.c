#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 0 or 1
 */

int check(char *s, int start, int end, int mod);
int last_index(char *s);
int is_palindrome(char *s)
{
	end = last_index(s);
	return (check(s, 0, end - 1, end % 2));
}

/**
 * last_index - returns the last index of a string (counts the null char)
 * @s: pointer the string
 * Return: int
 */

int last_index(char *s)
{
	int i = 0;

	if (*s > '\0')
		i += is_palindrome(s + 1) + 1;

	return (i);
}

/**
 * check - checker for the palindrome
 * @s: string
 * @start: int moves from right to left
 * @end: int moves from left to right
 * @mod: int
 * Return: 0 or 1
 */

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod != 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
