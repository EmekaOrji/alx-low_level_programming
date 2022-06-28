#include "main.h"

/**
 * print_last_digit - prints the last digit of a given integer
 * @number: any integer input
 * Return: the absolute value of the last digit of the integer input
 */
int print_last_digit(int number)
{
	int lastDigit;
	int absoluteNumber;

	lastDigit = (number % 10);
	if (lastDigit < 0)
		absoluteNumber = lastDigit * -1;
	else
		absoluteNumber = lastDigit;

	_putchar(absoluteNumber + '0');
	return (absoluteNumber);
}
