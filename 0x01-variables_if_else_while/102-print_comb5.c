#include <stdio.h>
/**
 * main - Entry point
 * prints numbers between 00 to 99
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 100; a++)
	{
		for (b = a; b < 100; b++)
		{
			if (a != b)
			{
				putchar('0' + (a / 10));
				putchar('0' + (a % 10));
				putchar(' ');
				putchar('0' + (b / 10));
				putchar('0' + (b % 10));

			if (a != 99 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}

	putchar('\n');
	return (0);
}
