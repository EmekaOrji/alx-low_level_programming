#include <stdio.h>

/**
 * main - print all possible different combinations of three-digit numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int num1;
	int num2;
	int num3;
	int last_num_1;
	int last_num_2;
	int last_num_3;

	for (num1 = '0'; num1 <= '9'; num1++)
		for (num2 = '1'; num2 <= '9'; num2++)
			for (num3 = '1'; num3 <= '9'; num3++)
				if ((num1 <= num2) && (num2 < num3) && (num1 != num2) && (num2 != num3))
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (num1 == '7' && num2 == '8' && num3 == '9')
					{
						putchar('\n');
						return (0);
					}
					putchar(',');
					putchar(' ');
				}

	return (0);
}
