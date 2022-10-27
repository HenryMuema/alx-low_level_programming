#include"main.h"
#include<string.h>
/**
 * _strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 *
 *Return: 0 if strings are equal, > 0 if s1 > s2 and < 0 if s2 >s1
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
