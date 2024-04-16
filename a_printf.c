#include "main.h"
/**
 * _printf - produces output according to a format
 * @format:
 * @...:
 * Return: i
 */
int _printf(const char *format, ...)
{
	int len, len2;

	len = _printf("%d", INT_MIN);
	len2 = printf("%d", INT_MIN);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);

if (!format || (format[0] == '%' && (!format[1] || format[1] == ' ')))
{
return (-1);
}

while (*format)
{
if (*format == '%')
{
format++;
	handle_for(arg, *format, &i);
}
else
{
_putchar(*format);
i++;
}
format++;
}

	va_end(arg);
	return (i);
}
