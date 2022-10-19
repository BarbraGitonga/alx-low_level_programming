#include "variadic_functions.h"

/**
 *print_strings - primts strings
 *
 *@separator: string printed between strings
 *@n: number of strings to be printed
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (!str)
		{
			str = "(nil)";
		}
		if (!separator)
		{
			printf("%s", str);
		}
		else if (separator && i == 0)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", separator, str);
		}
	}
	putchar('\n');

	va_end(list);
}
