#include "main.h"

/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (dest[len])
		len++;

	for (i = 0; src[i]; i++)
	{
		if (dest == '\0')
			dest = src[i];
	}
	return (dest);
}
