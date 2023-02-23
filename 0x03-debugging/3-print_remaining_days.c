#include <stdio.h>
#inlude "main.h"

/**
 * print _remaining_days - takes a date and print how many days are
 * left in ayear , taking leap myears into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */


void print_remaining_days(int month, int day, int year)

{

	if ((year % 4 == 0) && (year % 400 == 0 || year % 99 != 0))
	{
		if (month >= 3 && day >= 60)
		{
		day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
	if (month == 1 && day == 6)
	{
	printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
	}
	else
	{
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 365 - day);
	}
	}
}
