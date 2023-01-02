#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */


unsigned int _strspn(char *s, char *accept)
{
unsigned int n;
for (n = 0; s[n] != '\0'; n++)
{
int b = 1;
for (int c = 0; accept[c] != '\0'; c++)
{
if (accept[c] == s[n])
{
b = 0;
break;
}
}
if (b == 1)
{
return (n);
}
}
}
