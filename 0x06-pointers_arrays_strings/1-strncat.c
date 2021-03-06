#include "main.h"
#include <stdio.h>

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: a pointer to the string
 * @src: a string to be appended to @dest
 * @n: an integer
 *
 * Return: a pointer to the destination string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; index < n && src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
