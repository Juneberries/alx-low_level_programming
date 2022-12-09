#include <stdio.h>
/**
 * main - entry point
 * description:Write a program that prints all the numbers
 * of base 16 in lowercase, followed by a new line
 * return: always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 100; a++)
	{
		putchar(a + '0');
		if (a < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
