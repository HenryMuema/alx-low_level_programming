#include"main.h"
#include<string.h>
/**
 * _strcpy - copying from ojne string to another
 * @dest: buffer pointed to
 * @src: string pointed by to be copied
 *
 * Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
