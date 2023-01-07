#include <stdio.h>
#include <stdlib.h>

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
