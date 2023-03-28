#include "main.h"

/**
* _strcpy - Copies the string pointed to by src, including the
* terminating null byte (\0), to the buffer pointed to
* by dest.
* @dest: Pointer to the destination buffer.
* @src: Pointer to the source string to be copied.
*
* Return: Pointer to the destination buffer.
*/

char *_strcpy(char *dest, char *src)
{
	char *orig_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (orig_dest);
}
