#include"main.h"
#include<string.h>
/**
 *is_palindrome - checks if a string is palindrome or not
 *@s: string to be checked
 *
 *Return: 1 if palindrome
 */
int is_palindrome(char *s)
{
	int a = 0;
	int len = strlen(s);

	if (s[a] == s[len - a - 1])
	{
		is_palindrome(s + 1);
		return (1);
	}
	return (0);
}
	
