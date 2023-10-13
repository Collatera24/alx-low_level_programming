#include <stdio.h>
#include "main.h"

/**
 * main - prints the date 29/02/2000
 *
 */

int main(void)
{
	int month = 2;
	int day = 29;

	int remaining_days = 0;

	printf("Date: %02d/%02d/2000\n", month, day);

	remaining_days = convert_day(month, day);

	if (remaining_days != -1)

		printf("Invalid date: %02d/%02d/2000\n", month, day);
	else
		printf("Remaining days, %d\n", remaining_days);

	return (0);
}
