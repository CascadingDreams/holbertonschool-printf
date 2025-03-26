#include "main.h"
#include <stdio.h>

/**
 * handle_format - Handles format specifiers
 * @format: Current format specifier
 * @args: List of arguments
 * @count: Running count of characters printed
 *
 * Return: Updated count of printed characters
 */
int handle_format(char format, va_list args, int count)
{
	char *str;

	if (format == 'c')
	{
		count = count + _putchar(va_arg(args, int));
	}
	else if (format == 's')
	{
		str = va_arg(args, char *);
		count = _formatstring(str, count);
	}
	else if (format == '%')
	{
		count = count + _putchar('%');
	}
	else
	{
		_putchar('%');
		_putchar(format);
		count = count + 2;
	}
	return (count);
}
