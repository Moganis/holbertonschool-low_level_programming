#include "holberton.h"
#include <stddef.h>

char *_strchr(char *s, char c)
{   
	for(; ; s++)
	{
		if(*s == c)
			return (s);
	}
	return NULL;
}
