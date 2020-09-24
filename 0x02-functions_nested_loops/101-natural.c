#include <stdio.h>

/**
 *
 *
 *
 *
 * 
 *
 */
void numbers(void)
{
 int b;
    for(int a = 1; a < 1024; a++)
    {
        if( a % 3 == 0 )
        {
            printf("%d, ", a);
            b = a + b;
        }
        else if (a % 5 == 0)
        {
            b = a + b;
            printf("%d, ", a);
        }

    }
     printf("\n");
    printf("the result is %d", b);
}

