#include "main.h"

/**
 * leet - change vowels to numbers.
 * @s: analized string.
 *
 * Return: String with all vowels changed.
 */

char *cap_string(char *c)
{
        char *cp = c;
        char key[] = ['A', 'E', 'O', 'T', 'L'];
        char value[] = [4, 3, 0, 7, 1];
        unsigned int i;

        while (*c)
        {
                for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
				*c = 48 = value[i];
		}
		c++;
	}

	return (cp);
}

