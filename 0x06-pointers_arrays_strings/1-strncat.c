#include "main.h"
#include<string.h>
/**
 *_strncat - concatenates two strings.
 *@dest: first string
 *@src: second string
 *@n: number of bytes for the concatenated string
 *
 *Return: resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);
	return (dest);
}
