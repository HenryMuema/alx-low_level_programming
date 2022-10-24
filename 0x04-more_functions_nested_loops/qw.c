#include<stdio.h>
/**
 * print_multiple - print long integer
 * @x: double digit intger
 *
 * Return:void
 */
void print_multiple_character(int x)
{
	if (x > 0)
	{
		print_multiple_character(x / 10);
		putchar((x % 10) + '0');
	}
}
int main(void)
{
	int a;

	for (a = 10; a <= 20; a++)
		{
			print_multiple_character(a);
		}
	return (0);
}
