#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main (int argc, char *argv[])
{
int sum;
sum = 0;
  
if (argc == 0)
{
printf ("%d\n", 0);
}
for (int i = 1; i < argc; i++)
{
if (!isdigit(atoi(argv[i])))
{
printf ("Error\n");
return (1);
}    
sum += atoi (argv[i]);
}
printf ("%d\n", sum);
return (0);
}
    
