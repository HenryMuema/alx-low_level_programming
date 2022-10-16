/* a program that prints the alphabet in lowercase, and then in uppe*rcase
 */
#include<stdio.h>                                                   
int main(void)                                                      
{                                                         
	char chr;
	for(chr='a';chr<='z';chr++)
	{
		putchar(chr);

	}
	for(chr='A';chr<='Z';chr++)
	{
		putchar(chr)
	}
	putchar('\n');
	return(0);
}
