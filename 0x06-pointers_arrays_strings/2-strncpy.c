#include"main.h"
#include<string.h>
/**
 * _strncpy - copies a string
 *@dest: first string
 *@src: second string
 *
 *Return: copied string- 'dest'
 */
char *_strncpy(char *dest, char *src, int n)
{
	dest = strncpy(dest, src, n);
	return (dest);
}
