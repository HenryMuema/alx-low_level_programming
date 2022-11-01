#include"main.h"
#include<string.h>
/**
 *_strstr - locates a substring
 *@haystack: string searched for the 1st occurence of a substring
 *@needle:substring
 *
 *Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
