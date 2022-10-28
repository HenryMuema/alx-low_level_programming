#include"main.h"
#include<string.h>
#include<stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: string pointer to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int a, b, i;

	b = len - 1;
	i = 0;
	while (i <= b)
	{
		a = s[i];
		s[i] = s[b];
		s[b] = a;
		b--;
		_putchar(a);
	}
}
