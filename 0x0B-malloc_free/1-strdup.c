#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: a string
 *
 * Return: a duplicate of @str
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	s = malloc(len * sizeof(char) + 1);
	if (!s)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
