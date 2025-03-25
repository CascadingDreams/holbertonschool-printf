#include "main.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}

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

int _formatstring(char *str,int count)
{
	if (str == NULL)
	{
		str = "(null)";
	}
	return (count + _printstring(str));
}
