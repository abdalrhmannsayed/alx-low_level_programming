#include "main.h"

/**
 * _isalpha - function that check if c is letter
 *
 * @c: takes input from other function.
 *
 * Return: returns 1 if c is letter otherwise always 0 (success)
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
