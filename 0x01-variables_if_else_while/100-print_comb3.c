#include <stdio.h>

/**
 * main - print all possible different combinations of two-digit numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = '0'; num1 <= '9'; num1++)
		for (num2 = '1'; num2 <= '9'; num2++)
			if ((num1 < num2) && (num1 != num2))
			{
				putchar(num1);
				putchar(num2);
				if (num1 == '8' && num2 == '9')
				{
					putchar('\n');
					return (0);
				}
				putchar(',');
				putchar(' ');
			}

	return (0);
}
