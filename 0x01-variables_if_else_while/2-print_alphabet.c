#include<stdio.h>
int main(void)
{
	/*a program that prints lowercase alphabet*/
	char chr;
	for(chr='a';chr<='z';chr++)
	{
		putchar( chr);
		putchar('\n');
	}
	return(0);
}
