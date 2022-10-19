#include<stdio.h>
/**
 * main -  a program that prints the alphabet in lowercase, and t
 * hen in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar(chr);
	}
	for (chr = 'A'; chr <= 'Z'; chr++)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
