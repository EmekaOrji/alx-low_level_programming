#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @params: any integer positive or negative
 * Return: Always 0 (success)
 */
int _abs(int)
{
	int number;

	if (number >= 0)
	{
		_putchar(number);
	}
	else
	{
		_putchar(number * '-1');
	}

	return (0);
}
