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
	char *str = "";

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (!*format)
			{
				return ( -1);
			}	
			if (*format == 'c')
			{
				count = count + _putchar(va_arg(args, int));
			}

			if (*format == 's')
			{
				str = va_arg(args, char*);
				if (str == NULL)
				{
					str = "(null)";
				}
				count = count + _printstring(str);
			}
			if (*format == '%')
			{
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
