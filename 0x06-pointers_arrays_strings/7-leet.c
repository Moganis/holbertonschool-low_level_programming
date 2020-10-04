#include "holberton.h"


char *leet(char *hi)
{
    char minus[] = {'a','e','o','t','l','\0'};
    char mayus[] = {'A','E','O','T','L', '\0'};
    char numbers[] = {'4','3','0','7','1','\0'};
    
    int i, a;    
	for (i=0;hi[i]!='\0';++i)
	{
	    for(a=0; a < 5; a++)
	    {
		    if(hi[i] == minus[a] || hi[i] == mayus[a])
		    {
			    hi[i]= numbers[a];
		    }
	    }
	}
	return hi;
}
