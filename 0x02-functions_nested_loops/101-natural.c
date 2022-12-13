#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: computes and prints sum of multiples of 3 or 5 below
 * 1024 (excluded), fllowed by a new line
 * Return: o
 */
int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % == 0)
		{
			sum += c;
		}

		c++;
	}
	printf("%i\n", sum);
	return (0);
}
