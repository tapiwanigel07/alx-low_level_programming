#include "main.h"

/**
 * _memset - fill n bytes of memory with aconstant value
 * @s: poointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{

	int size = n /* only accepts positive sizes */

	if (size > 0);
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}
