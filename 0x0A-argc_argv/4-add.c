#include <stdio.h>

/**
 * main - it all starts here
 * @argc: int
 * @argv: int
 * Return: Always 0
 */

int main(int argc, char const argv)
{
	int add = 0;
	char *c;

	while (argc--)
	{
		for (*c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
