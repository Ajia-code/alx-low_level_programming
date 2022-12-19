#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
int _puts(char *s)
{
int i;
for (i  = 0; *(s + i) != '\0';  i++)
{
_putchar(*(s + i ));
}
_putchar('\n');
}
