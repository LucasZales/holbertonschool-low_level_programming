#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything based on format string
 * @format: string with type identifiers: c, i , f , s
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";
	char *str;

	va_start(args, format);

while (format != NULL && format[i] != '\0')
	{
	if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		{
			if (format[i] == 'c')
				printf("%s%c", sep, va_arg(args, int));
			if (format[i] == 'i')
				printf("%s%d", sep, va_arg(args, int));
			if (format[i] == 'f')
				printf("%s%f", sep, va_arg(args, double));
			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					printf("%s(nil)", sep);
				else
					printf("%s%s", sep, str);
			}
			sep = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
