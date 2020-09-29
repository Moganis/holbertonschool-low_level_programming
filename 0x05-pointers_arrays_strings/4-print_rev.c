#include "holberton.h"

/**
 *
 *
 *
 *
 *
 *
 */
void print_rev(char *s)
{
        int a, b;

        for (a = 0; s[a] != '\0'; a++)
        {
            b = a;
        }
        for(; s[b] != '\0'; b--)
        {
            _putchar(s[b]);
        }
        _putchar('\n');
}

