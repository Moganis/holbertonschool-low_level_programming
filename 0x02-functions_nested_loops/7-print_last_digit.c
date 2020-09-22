#include "holberton.h"

/**
 * print_last_digit - ultimo digito de un numero
 *
 * @a: This is the entry
 * Return: Always 0.
 */

int print_last_digit(int a)
{
	if (a > 0)
	{
		a = a % 10;
		_putchar('0' + a);
	}
	else if (a < 0)
	{
		a = a * -1;
		a = a % 10;
		_putchar('0' + a);
        }
	else
        {
		_putchar('0' + a);
	}
	return(a);
}
