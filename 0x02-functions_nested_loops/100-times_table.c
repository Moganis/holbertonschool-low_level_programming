#include "holberton.h"

/**
 * _abs - This is a absolute value
 *
 * @a: This is the entry
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int b, c, d;
if (n >= 0 && n <= 15 )
{
	for (c = 0; c <= n; c++)
	{
		for (b = 0; b <= n; b++)
		{
			d = b * c;

			if (b == 0)
			{
				printf("%d",d);
			}

			else if (d <= 9)
			{
				printf("  %d", d);
			}
			else if (d >= 10 && d <= 99)
			{
              printf(" %d", d);
			}
			else
			{
			printf("%d", d);
			}
			if (b != n)
			{
				printf(", ");
			}
		}
			putchar('\n');
		}

	}
	return 0;
}
