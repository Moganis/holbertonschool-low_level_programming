#include "holberton.h"

char *rot13(char *hi)
{
	int i, a;

	char minus[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char mayus[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; hi[i] != '\0'; ++i)
	{
		for(a = 0; minus[a] != '\0' ; a++)
		{
			if(hi[i] == minus[a])
			{
				hi[i] = mayus[a];
			    break;
			}
		}
	}
	hi[i] = '\0';
	return hi;
}
