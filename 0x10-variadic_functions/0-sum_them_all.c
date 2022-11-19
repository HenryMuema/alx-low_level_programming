#include<stdarg.h>
#include"variadic_functions.h"
/**
 */
 int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int add = 0;
	va_list a;
	va_start(a, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			add += va_arg(a, int);
		}
	}
	va_end(a);
	return (add);
}
