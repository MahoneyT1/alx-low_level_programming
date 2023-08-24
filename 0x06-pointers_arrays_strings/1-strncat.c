#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: number of byte to concatenate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen;

	for (i = 0; dest[i] != '\0' ; i++)
		destlen++;

	for (i = 0; i < n && *src != '\0' ; i++)
	{
		dest[destlen + i] = src[i];
		src++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}
