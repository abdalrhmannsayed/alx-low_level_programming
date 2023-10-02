#include "main.h"

/**
 * _strstr - prints the consecutive caracters of s1 that are in s2.
 * @haystack: source string
 * @needle: searching string
 *
 * Return: new string.
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return ('\0');
}
