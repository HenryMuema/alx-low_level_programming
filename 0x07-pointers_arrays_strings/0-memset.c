#include"main.h"
#include<string.h>
/**
 *_memset - fills memory with a constant style
 *@b: constant byte
 *@n: first bytes of the memory area pointed to by s
 *@s:pointer
 *
 *Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	s = memset(s, b, n);
	return (s);
}
