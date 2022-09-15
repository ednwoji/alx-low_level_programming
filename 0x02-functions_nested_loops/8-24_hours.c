#include "main.h"


/**
 * void jack_bauer(void) - Check description
 * Description: Prints every minute of the day
 * Return: 0 if successful
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;
	int hour_remainder;
	int min_remainder;

	while (hour <= 23)
	{
		while (minute <= 59)
		{
			min_remainder = minute % 10;
			hour_remainder = hour % 10;
			_putchar (hour / 10 + '0');

			_putchar (hour_remainder + '0');

			_putchar (':');
			_putchar (minute / 10 + '0');
			_putchar (min_remainder + '0');
			minute++;
			_putchar('\n');
		}
		hour++;
		minute = 0;
	}
}
