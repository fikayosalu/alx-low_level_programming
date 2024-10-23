#ifndef MAIN_H
#define MAIN_H

#include<stddef.h>

char *_strchr(char *s, char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
int _strlen(char *s);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);

#endif
