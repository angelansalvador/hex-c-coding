#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - generate number and test positive or negative
* Return: number and if posit. our negat.
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
