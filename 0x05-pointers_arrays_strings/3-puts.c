#include "main.h"
/**
 * _puts - write a function that prints a string, followed
 * by a new line, to stdout
 * @str: my input string
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putcahr(str[i]);
		i++;
	}
	_putchar('\n');
}
