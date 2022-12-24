/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 1 (on success)
 * On error, -1 is returned, and  error is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
