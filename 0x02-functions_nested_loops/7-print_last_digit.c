#include "holberton.h"

/**
 * print_last_digit - ultimo digito de un numero
 *
 * @a: entry point
 *
 * Return: return las digit
 **/

int print_last_digit(int n)
{

	if (n > 0)
        {
                n = n % 10;
                _putchar('0' + n);
		return (n);
        }
        else if (n < 0)
        {
                n =  -n;
                n = n % 10;
                _putchar('0' + n);
		return(n);
        }
        else
        {
                _putchar('0' + n);
		return (n);
        }
        
}
