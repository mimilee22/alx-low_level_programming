#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry point of the program
*
* Return: Always 0
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
