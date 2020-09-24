#include <stdio.h>

/**
 *
 *
 *
 *
 */


int numbers(void)
{
 int b;
    for(int a = 1; a < 1024; a++)
    {
        if( a % 3 == 0 )
        {
            printf("%d", a);
            b = a + b;
            if (a != 1023)
        {
            printf(", ");
        }
        }
        else if (a % 5 == 0)
        {
            b = a + b;
            printf("%d", a);
            if (a != 1023)
        {
            printf(", ");
        }
        }
    }
     printf("\n");
     printf("%d", b);
     return b;
}
