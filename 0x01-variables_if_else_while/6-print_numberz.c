#include <stdio.h>
/**
 * main - Entry point
 * prints single digit nums of base 10 from 0 using the putchar function
 * Return: Always 0
*/
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
