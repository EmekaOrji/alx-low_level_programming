#include "main.h"

/**
 * more_numbers - prints number from 0 to 14 followed by a new line 10times
 *
 * Return: void
 */
void more_numbers(void)
{
	int row;
	int n;

	for (row = 0; row < 10; row++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');

			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
