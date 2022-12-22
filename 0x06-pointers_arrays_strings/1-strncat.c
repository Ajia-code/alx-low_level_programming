#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
  int count = 0, count2  = 0, count3 = 0;
  while (*(dest + count) != '\0')
    {
      count++;
    }

  while (*(src + count3) != '\0')
    {
      count3++;
    }

  for (count2; n > count2; count2++)
    {
      if (count2 == count3 )
	break;
      *(dest + count) = *(src + count2);
      count++;
    }
  return (dest);
}
