#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - De 0 a 99 con comas
* Return: 0 for success
*/
int main(void)
{
	int ch;

	for (ch = 0; ch < 100; ch++)
	{
	putchar((ch / 10) + '0');
	putchar((ch % 10) + '0');
		if (ch != 99)
		{
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
