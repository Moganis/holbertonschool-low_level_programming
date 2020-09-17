#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Imprimir abecadario con letras mayusculas
* Return: 0 for success
*/
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
