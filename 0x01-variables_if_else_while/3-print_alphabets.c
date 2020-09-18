#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - De la a hasta z y desde la A hasta la Z
* Return: 0 for success
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
