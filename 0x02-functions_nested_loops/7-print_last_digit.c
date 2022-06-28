#include "main.h"

/**
 * print_last_digit - prints the last digit of a given integer
 * @number: any integer input
 * @lastDigit: the last digit of the input integer
 * @absoluteNumber: the absolute value of the input integer
 * Return: the last digit of the integer input
 */
int print_last_digit(int number)
{
	int lastDigit;
	int absoluteNumber;

	lastDigit = (number % 10);
	absoluteNumber = _abs(lastDigit);

	_putchar(absoluteNumber);
	return (absoluteNumber);
}
