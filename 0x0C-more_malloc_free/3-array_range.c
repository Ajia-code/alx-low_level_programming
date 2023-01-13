#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */


int *array_range(int min, int max)
{
  int *array;
  int j;

  if (min > max)
    {
      return NULL;
    }

  array = (int *) malloc(sizeof(int) * ((max - min) + 1));

  if (array == NULL)
    {
      return NULL;
    }

  for (j = 0; min <= max; j++)
    {
      array[j] = min;
      min++;
    }
  return array;
}
