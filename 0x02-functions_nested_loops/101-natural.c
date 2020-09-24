#include <stdio.h>

/**
 *
 *
 *
 *
 */


int main(void)
{
 int b;
    for(int a = 1; a < 1024; a++)
    {
        if( a % 3 == 0 )
        {
            b = a + b;
        }
        else if (a % 5 == 0)
        {
            printf("%d", a);
        }
    }
     printf("%d\n", b);
     return b;
}
