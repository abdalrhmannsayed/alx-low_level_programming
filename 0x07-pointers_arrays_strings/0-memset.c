#include "main.h"

/**
 * _memcpy - function that copies memory area
 *@dest: the address of memory to print
 *@src: second value
 *@n: thirth value
 *
 * Return: char with result of memset
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i > 0; i++, n--)
		s[i] = b;

	return (s);
}
