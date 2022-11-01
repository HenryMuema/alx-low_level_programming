#include"main.h"
#include<string.h>
/**
 *_strspn - gets the length of a prefix substring
 *@s: string to be checked
 *@accept: determinant string
 *
 *Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	char point;

	point = strspn(s, accept);
	return (point);
}
