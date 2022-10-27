#include"main.h"
#include<string.h>
/**
 * _strncpy -  copies a string.
 *@dest: first string
 *@src: second string
 *@n: number of character to print
 *
 *Return: copied string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a <= n; a++)
	{
		strcpy(dest[a], src[a]);
	}
}
