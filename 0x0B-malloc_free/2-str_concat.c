#include  <stdlib.h>

/**
 * str_concat - concatenatc two strings
 * @s1: a character array
 * @s2: a character array to be concat to s1
 *
 * Return: returns a pointer to the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
unsigned int b, c, i, y;
char *concat;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (b = 0; s1[b] != '\0'; b++)
{
;
}
for (c = 0; s2[c] != '\0'; c++)
{
;
}

concat  = (char *) malloc(sizeof(char) * (b + c + 1));

if (concat == NULL)
{
free(concat);
return (NULL);
}

for (i = 0; s1[i] != '\0'; i++)
{
concat[i] = s1[i];
}
for (y = 0; s2[y] != '\0'; y++)
{
concat[b] = s2[y];
b++;
}

return (concat);

}
