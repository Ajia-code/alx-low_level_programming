#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
  int n ;
  for (n = 0; n >= 0 && s1[n] != '\0' && s2[n] != '\0'; n++)
    {
      int subt = s1[n] - s2[n];
      if (subt == 0)
	{
	  continue;
	}
      else
	{
	  return(subt);
	}
    }
}
