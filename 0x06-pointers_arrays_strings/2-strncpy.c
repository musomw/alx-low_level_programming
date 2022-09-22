#include "main.h"

/**
 * _strncpy - C function that copies a string, including the
 * terminating null byte, using at most an inputted number of
 * bytes if the length of the source string is less than the
 * maximum byte number the remainder of the destination string
 * is filled with null bytes. It works identically to the
 * standard library function 'strncpy'.
 * @dest: buffer for storing the string copy
 * @src: the soruce string
 * @n: max number of bytes copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i];

	return (dest);
}

