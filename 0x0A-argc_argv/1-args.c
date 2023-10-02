#include <stdio.h>

/**
 * main - print number of arguments passed.
 * @argc: int
 * @argv: int
 * Return: 0
 */

int main(int argc, void *argv[])
{
	(void)argc;
	printf("%d\n", argc - 1);
	return (0);
}
