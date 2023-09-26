#include "main.h"

/**
 * _strpbrk - prints the consecutive caracters of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 *
 * Return: new string.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[i] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (0);
}
