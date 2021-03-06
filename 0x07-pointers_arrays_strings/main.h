#include <stddef.h>
#ifndef MAIN_H
#define MAIN_H

void set_string(char **s, char *to);
void *_memset(void *s, char b, unsigned int n);
void print_diagums(int *a, int size);
char *_strpbrk(char *s, char *accept);
char _putchar(char *c);
char *_strstr(char *haystack, char *needle);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
void *_memcpy(void *dest, const void *src, unsigned int n);

#endif
