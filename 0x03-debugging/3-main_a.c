#include <stdio.h>
#include "main.h"

/**
 * @is_leap - checks if a year is a leap year
 *
 * @year: the year to check
 *
 * Return: 1 if it's a leap year, 0 if not
 */

int is_leap(int year);

/**
 * main - takes a date and prints how many days are left in the year, taking
 * leap years into account
 * Return: 0
 */

int main(void)
{

	int month = 4;
	int day = 01;
	int year = 1997;
	int remaining_days;

	printf("Date: %02d/%02d/%04d\n", month, day, year);


	day = convert_day(month, day);


	if (is_leap(year) && month > 2)
	{
		remaining_days = 366 - day - 1;
	}
	else
	{
		remaining_days = 365 - day;
	}

	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", remaining_days);

	return (0);
}

int is_leap(int year)
{
	/**
	 * is_leap - checks if a year is a leap year
	 *
	 * @year: the year to check
	 *
	 * Return: 1 if it's a leap year, 0 if not
	 */

	return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

