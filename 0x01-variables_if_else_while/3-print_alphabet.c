#include <stdio.h>

/**
 * main - Entry point
 * prints the alphabets in lowercase and uppercase
 * Return: Always 0
*/
int main(void)
{
	int alp = 97;
	int ALP = 65;

	while (alp <= 122)
	{
		putchar(alp);
		alp++;
	}
	while (ALP <= 90)
	{
		putchar(ALP);
		ALP++;
	}
	putchar('\n');
	return (0);
}

