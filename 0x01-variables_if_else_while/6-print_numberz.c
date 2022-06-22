#include <stdio.h>

/**
 * main - print all single digit numbers in base 10 using putchar()
 *
 * Return: 0 on success
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
