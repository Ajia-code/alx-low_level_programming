#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
  unsigned int i = 0;
  char *array;
  unsigned int array_size;
  array_size = nmemb * size;

  if (nmemb == 0 || size == 0)
    {
      return NULL;
    }
  array = (char *)malloc(array_size);

  if (array == NULL)
    {
      return NULL;
    }

  while (i < sizeof(array))
    {
      array[i] = 0;
      i++;
    }
  return array;
}
