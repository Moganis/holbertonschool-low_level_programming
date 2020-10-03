#include "holberton.h"

char *_strcat(char *dest, char *src)
{
    int a, b, c;
    
    for(a = 0; dest[a] != '\0'; a++)
    {
    }
    for(b = 0; src[b] != '\0'; b++)
    {
           dest[a] = src[b];
           a++;
    }
    return dest;
}
