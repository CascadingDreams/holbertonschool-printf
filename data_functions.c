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



/**
 * _printnumber - prints a number digit by digit
 * @n: number to print
 * Return: number of characters printed
 */

int _printnumber(int n)
{
    int count = 0;
    int digit_count = 0;
    int temp, digit, i, j;
    
    /* Handle zero immediately */
    if (n == 0)
    {
        _putchar('0');
        return 1;
    }
    
    /* Handle negative numbers */
    if (n < 0)
    {
        _putchar('-');
        count++;
        n = -n;
    }
    
    temp = n

    /* Count digits */
    while (temp >= 1)  
    {
        temp /= 10;
        digit_count++;
    }
    
    count += digit_count;
    
    /* Print digits from first to last */
    for (i = digit_count; i > 0; i--)
    {
        temp = n;
        /* Get the current digit */
        for (int j = 1; j < i; j++)
            temp /= 10;
        digit = temp % 10;
        _putchar(digit + '0');
    }
    
    return count;
}
