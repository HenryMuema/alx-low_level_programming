#include"main.h"
#include<string.h>
/**
 *_strchr - locates a character in a string
 *@s: string in which the function searches for
 *@c: the character to be searched for
 *
 *Return: a pointer to the first occurence of the character c in the string
 */
char *_strchr(char *s, char c)
{
	char *point;

	point = strchr(s, c);
	return (point);
}
