#include <stdio.h>

/**
 * main -print alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);
	putchar('\n');

	return (0);
}
