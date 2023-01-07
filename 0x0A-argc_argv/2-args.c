#include <stdio.h>
/**
 * main prints all arguments it received
 * @argc: number of command line argument
 * @argv: array array that contain the program command line argument
 * return: 0 - success.
 */

int main(int argc, char *argv[])
{
for (int i = 0; i < argc;i++)
{
printf ("%s\n", argv[i]);
}
return (0);
}
  
