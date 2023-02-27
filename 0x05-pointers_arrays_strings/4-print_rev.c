#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by anew line
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	/*iterate to find the lenght of a string and point to last character */
	while (*s != '\0')
	{
		len++;
		++s;
	}

	/* go back to character before null character */
	s--;

	/* print string reversed */
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
