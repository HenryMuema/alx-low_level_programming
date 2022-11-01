#include"main.h"
#include<string.h>
/**
 *_memcpy - copies memory area
 *@dest: memory area the number of bytes are copied to
 *@src: memory area the function copies from
 *@n: the number of bytes the function copies
 *
 *Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	dest = memcpy(dest, src, n);
	return (dest);
}
