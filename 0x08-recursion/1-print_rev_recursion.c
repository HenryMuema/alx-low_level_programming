#include"main.h"
#include<string.h>
/**
 *_print_rev_recursion - prints a string in reverse
 *@s: string to be printed
 *
 *Return: void
 */
void _print_rev_recursion(char *s)
{
	int a;

	a = strlen(s) - 1;
	if (a < 0)
	{
		return;
	}
	_putchar(s[a]);
	_print_rev_recursion(s + 1);
	_putchar('\n');
}
