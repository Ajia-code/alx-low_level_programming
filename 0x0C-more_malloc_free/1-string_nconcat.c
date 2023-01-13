#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  unsigned int i, j, k;
  unsigned int len;
  char *str;

  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";

  for (k = 0; s1[k] != '\0'; k++)
    {
      ;
    }

  for (j = 0; s2[j] != '\0'; j++)
    {
      ;
    }

  if (n > j)
    {
      n = j;
    }

  str = (char *)malloc(sizeof(char) * (k + n + 1));

  if (str == NULL)
    return NULL;

  for (i = 0; s1[i] != '\0'; i++)
    {
      str[i] = s1[i];
    }

  for (i = 0; i < n; i++)
    {
      str[k] = s2[i];
      k++;
    }

  return str;
}
