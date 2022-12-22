#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */


char *_strncpy(char *dest, char *src, int n)
{
int i  = 0;
while (n > 0)
{
if (*(dest + i ) != '\0')
{
*(dest + i) = *(src + i) ;
i++;
n--;
}
}
for ( ; i < n; i++)
dest[i] = '\src;
return(dest);
}
