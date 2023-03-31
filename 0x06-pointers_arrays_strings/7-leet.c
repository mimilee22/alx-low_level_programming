#include "main.h"
#include <stddef.h>
/**
* leet - Encodes a string into 1337.
* @s: The string to encode.
*
* Return: A pointer to the encoded string.
*/
char *leet(char *s)
{
int i, j;
char *letters = "aAeEoOtTlL";
char *leet_codes = "4433007711";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (s[i] == letters[j])
{
s[i] = leet_codes[j];
break;
}
}
}
return (s);
}
