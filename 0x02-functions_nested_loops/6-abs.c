#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @number: any integer positive or negative
 * Return: The absolute value of the integer input
 */
int _abs(int number)
{
	if (number >= 0)
	{
		return (number);
	}
	else
	{
		return (number * -1);
	}
}
