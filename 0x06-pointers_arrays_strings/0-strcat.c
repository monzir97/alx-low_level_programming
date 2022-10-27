#include "main.h"
/**
 * strcat - appends the src string to the dest
 *@dest: the the resulting string.
 *@src: the source string 
 *Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

