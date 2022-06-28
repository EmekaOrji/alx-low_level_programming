#include "main.h"

/**
 * print_last_digit - prints the last digit of a given integer
 * @number: any integer input
 * @ld: the last digit of the input integer
 * @abs: the absolute value of the input integer
 * Return: the absolute value of the last digit of the integer input
 */
int print_last_digit(int number)
{
	int ld;
	int abs;

	ld = (number % 10);
	if (ld < 0)
		abs = ld * -1;
	else
		abs = ld;

	_putchar(abs + '0');
	return (abs);
}
