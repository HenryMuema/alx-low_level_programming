#include"main.h"
#include<string.h>
/**
<<<<<<< HEAD
* string_toupper - changes all lowercase letters of a string to uppercase
*@x: string argument
*
* Return: changed string
*/
char *string_toupper(char *x)
{
	int a;

	for (a = 0; x[a] != '\0'; a++)
	{
		if (x[a] >= 'a' && x[a] <= 'z')
		{
			x[a] = x[a] - 32;
		}
	}
	return (x);
=======
 *string_toupper -  changes all lowercase letters of a string to uppercase.
 *@a: string to be changed
 *
 *Return: changed string
 */
char *string_toupper(char *a)
{
	char str = strupr(a);
	return (str);
>>>>>>> ab7dfb1cc5ab281d6e0a30e01fccbfa1814aad66
}
