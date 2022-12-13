#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes hte character c to standout
 * @c: the character to print
 * Return: on Success 1
 */
int _putchar(char c)
{
	return (write(1, &c,1));
}
