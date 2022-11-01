#include"main.h"
#include<string.h>
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: string to be checked
 *@accept: determinant string
 *
 *Return: pointer to the byte s
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
