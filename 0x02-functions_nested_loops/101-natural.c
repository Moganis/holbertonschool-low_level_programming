#include <stdio.h>

/**
 *
 *
 *
 *
 */


int main(void)
{
 int b , a;
    for( a = 1; a < 1024; a++)
    {
        if( a % 3 == 0 )
        {
            b = a + b;
        }
        else if (a % 5 == 0)
        {
            b = a + b;
        }
    }
     printf("%d\n", b);
     return (0);
}
