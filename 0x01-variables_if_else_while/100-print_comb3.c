#include <stdio>

/**
 * main - print 00 t0 99 with no duplicate digits or combos: no 11, 10 (01)
 *
 * Return: Allways 0 (Success)
 */

int main(void)
{
	int ones;
	int tens;

	for (tens = '0'; tens <= '9'; tens++) /*increment tens*/
	{
		for (ones = (tens + 1); ones <= '9'; tens++) /*one's ten+1*/
		{
			putchar(tens);
			putchar(ones);

			if (tens != '8' || ones != '9') /*print commas*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
