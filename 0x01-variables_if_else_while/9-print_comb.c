#include <stdio.h>

/**
 * main - print all possible combination of single-digit numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int num;
	int num2;

	for (num = '0'; num <= '9'; num++)
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			putchar(num);
			putchar(num2);
			putchar(',');
			putchar(' ');
		}

	return (0);
}
