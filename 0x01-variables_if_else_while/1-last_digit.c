#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Greather and Less than 5 or 6
* Return: 0 for success
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_digit);
	}
	else
	{
	printf("Last digit of %d is %d is less than 6 and not 0", n, last_digit);
	}

	return (0);
}
