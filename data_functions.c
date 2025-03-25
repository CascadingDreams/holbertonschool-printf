#include "main.h"

/**
 * _putchar - prints a char
 * @c: character
 *
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printstring - prints a string
 * @str: the string input
 *
 * Return: count
 */
int _printstring(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	return (count);
}

/**
 * _formatstring - formats string for printf
 * @str: the string input
 * @count: count of string
 *
 * Return: _printstring func
 */
int _formatstring(char *str, int count)
{
	if (str == NULL)
	{
		str = "(null)";
	}
	return (count + _printstring(str));
}
