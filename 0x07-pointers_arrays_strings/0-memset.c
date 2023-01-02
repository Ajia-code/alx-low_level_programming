#include "main.h"
/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled
 * Return: the pointer to dest.
 */


char *_memset(char *s, char b, unsigned int n)
{
  for (int c = 0; c < n; c++)
    {
      s[c] = b;
    }
  return (s)
}
