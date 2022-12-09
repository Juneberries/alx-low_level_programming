#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description:program that prints all no.s of basee 16 in lowercase
 * followed by a new line
 * Return: ALways 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ')
		}
		c++;
	}
	putchar('\n');
	return (0);
}
