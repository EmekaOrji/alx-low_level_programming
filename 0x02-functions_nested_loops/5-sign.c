#include "main.h"

/**
 * print_sign - checks if a number is positive or negative
 * @n: any integer input
 * Return: 1 if positive, 0 if zero, and -1 if negative
 */
int print_sign(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (1);
}
