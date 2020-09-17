#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - putchar between a and z, except q and e
* Return: 0 for success
*/
int main(void)
{
	char ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++)
	{
        	if ((ch != 'q') && (ch != 'e')) 
		{
			putchar(ch);
        	}
    	} 

	putchar('\n');

	return (0);
}
