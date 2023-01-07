#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main (int argc, char *argv[])
{
if (argc == 3)
{
int times;
int one = atoi(argv[1]);
int two = atoi(argv[2]);
times = one * two;
printf ("%d\n", times);
return (0);
}
else
printf ("Error\n");
return (1);
}
