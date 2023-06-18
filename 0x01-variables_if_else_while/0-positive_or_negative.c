#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Determines wether the number assigned to n is pos, neg or equal to zero
 * Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
	printf("%d is positive\n", n);
}
	else if (n == 0)
{
	printf("%d is zero\n", n);
}
	else
{
	printf("%d is negative\n", n);
}
	return (0);
}
