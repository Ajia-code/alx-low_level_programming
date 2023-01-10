#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
unsigned int c,i;
char *dup;
if (str == NULL)
{
return (NULL);
}

for (c = 0; str[c] != '\0'; c++)
{
;
}

dup = (char*) malloc(sizeof(char) * (c +1));

if (dup == NULL)
{
return (NULL);
}
for (i  = 0; i <= c; i++)
{
dup[i] = str[i];
}

return (dup);
}
