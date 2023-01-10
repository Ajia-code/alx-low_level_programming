#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
if (size == 0)
return (NULL);

char *ar;

ar  = malloc (size);

if (ar == NULL)
return (NULL);

for (int i = 0; i < size; i++)
{
ar[i] = c;
}
return (ar);
}
