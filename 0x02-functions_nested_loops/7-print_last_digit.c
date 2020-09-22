#include "holberton.h"

/**
 * print_last_digit - ultimo digito de un numero
 *
 * @a: entry point
 *
 * Return: return las digit
 **/

int print_last_digit(int a)
{	
	n = n % 10;

	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
