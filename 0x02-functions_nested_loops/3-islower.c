#include "main.h"

/**
 * _islower - checks for letter casing
 * @c: a single letter input
 * Return: 1 if lowercase and 0 if uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
