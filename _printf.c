#include "main.h"

/**
 * _printf - custom printf function
 * @format: format string containing directives
 *
 * Return: Number of chars printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (format == NULL)
	{
		return (0);
	}

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				count = count + _putchar(va_arg(args, int));
			}

			if (*format == 's')
			{
				count = count + _printstring(va_arg(args, char *));
			}
			else
			{
			
				count = count + _putchar('%');
				count = count + _putchar(*format);
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);

}
