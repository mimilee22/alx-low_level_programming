#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Determine if a random number is positive, negative or zero
*
* Return: 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n < 0)
{
printf("$n: is negative");
}
else if (n > 0)
{
printf("$n: is positive");
}
else
{
printf("$n: is zero");
}
return (0);
}
