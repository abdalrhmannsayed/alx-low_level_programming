#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum of coins
 * to makes change for an amount of money.
 * @argc: int
 * @argv: int
 * Return: 0 success, non-zero fail
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, leatcents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				leatcents += money / cents[i];
				money = money % cents[i];
				if (money % cents[i] == 0)
					break;
			}
		}
		printf("d\n", leatcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
