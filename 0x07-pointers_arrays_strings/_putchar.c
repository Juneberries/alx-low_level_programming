#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character x to stdout
 * @c: the character to print
 * Return: 1 if succesful, -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
