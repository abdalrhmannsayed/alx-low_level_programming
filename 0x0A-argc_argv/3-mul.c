#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of 2 numbers.
 * argc: int
 * argv: int
 * Return: 0 success, non-zero fail
 */

int main(int argc, char const *argv[])
{
        int sum;

        if (arg == 3)
        {
                sum = atoi(argv[1]) * atoi(argv[2]);
                printf("%d\n", sum);
        }
        else
        {
                printf("Error\n");
                return (1);
        }
        return (0);
}

