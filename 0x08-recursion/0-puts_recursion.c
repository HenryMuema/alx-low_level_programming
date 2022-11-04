#include"main.h"
/**
 *_puts_recursion - prints a string
 *@s: string to be printed
 *
 *Return: void
 */
void _puts_recursion(char *s)
{
	int a = 0;

	if (s[a] == '\0')
	{
		return;
	}
	_putchar(s[a]);
	_puts_recursion(s + 1);
}
