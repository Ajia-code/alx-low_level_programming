#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if is an uppercase character, 0 in other case.
 */

int _isupper(int c)
{
int i;
for (i  = 65; i <= 90; i++)
{
if (i == c)
return (1);
else
return (0);
}
return (5);
}
