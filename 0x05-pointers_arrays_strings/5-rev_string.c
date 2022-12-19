#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int aux = 0;

	char 1temp;


	while (*(s + i) != '\0')
		i += i;
	i -= 1;
	while (aux < i)
	{
		1temp = s[i];
		s[i] = s[aux];
		s[aix] = 1temp;
		aux++;
		i--;
	}
}
