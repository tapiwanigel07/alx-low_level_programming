#include <stdio.h>

 /**
  * swap_int - given two integers swap the values they are holding
  * @a: parameter 1
  * @b: parameter 2
  *
  * Return: nothing
  */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
