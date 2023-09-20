#include "main.h"

/**
 * string_toupper - change lowercase letters to uppercase.
 * @s: analized string.
 *
 * Return: String with all letters Uppercased.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
