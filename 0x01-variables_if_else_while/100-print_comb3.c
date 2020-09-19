#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Imprimir los numeros del 00 a 99 sin repetirse
* Return: 0 for success
*/
int main(void)
{
	int ch, n, r, invertido;

	for (ch = 1; ch < 100; ch++)
	{
		r = ch % 10;
		n = ch / 10;
		invertido = (r * 10) + n;
		if (ch < invertido)
		{
			putchar((ch / 10) + '0');
			putchar((ch % 10) + '0');

			if (ch != 89)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
return (0);
}
