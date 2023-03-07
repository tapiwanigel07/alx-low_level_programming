#include "main.h"

/**
 * _memset - fill n bytes of memory with specific value
 * @s: starting address of  memory to be filled
 * @b: desired value
 * @n: number of bytes to be chamnged
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
