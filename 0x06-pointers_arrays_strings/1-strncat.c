#include "main.h"

/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;

	while (dest[len])
		len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len++] = src[i];

	dest[len++] = '\0';

	return (dest);
}
