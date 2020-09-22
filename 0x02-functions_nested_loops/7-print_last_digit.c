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

	 if (a > 0)
        {
                a = a % 10;
                _putchar('0' + a);
		return (a);
        }
        else if (a < 0)
        {
                a = a * -1;
                a = a % 10;
                _putchar('0' + a);
		return(a);
        }
        else
        {
                _putchar('0' + a);
		return (a);
        }
        
}
