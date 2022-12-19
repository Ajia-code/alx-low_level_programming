#inclnoe "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */


int print_rev(char *s)
{
int i;
for (i = 0; *(s + i) != '\0' ;  i++)
{
}
while (i  >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
return (0);
}
