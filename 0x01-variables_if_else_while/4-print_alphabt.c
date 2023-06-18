#include <stdio.h>
/**
 * main - Entry point
 * prints the alphabet in lowercase except q and e
 * Return: Always 0
 */
int main(void)
{
	int alp = 97;

	while (alp <= 122)
	{
		if (alp == 101 || alp == 113)
		{
			alp++;
			continue;
		}
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
