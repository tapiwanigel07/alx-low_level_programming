#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - print buffer in hexa
 * @buffer: address of the memory to print
 * @size: size of the memory to print
 *
 * Retur: Nothing.
 */
void simple_print_buffer(char * buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
