#include <stdio.h>

/**
 * main - Entry point
 * prints the alphabet in lowercase
 * Return: Always 0
*/
int main(void)
{
	int alp = 97;

	while (alp <= 122)
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
