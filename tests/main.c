#include "../main.h"
#include <stdio.h>
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("%d\n", INT_MAX);
    printf("%d\n", INT_MAX);
    _printf("%d\n", INT_MIN);
    printf("%d\n", INT_MIN);
    _printf("I am %d %s\n", 21, "year's old");
    printf("I am %d %s\n", 21, "year's old");
     _printf("Hello %c\n", NULL);
    printf("Hello %c\n", NULL);
    _printf("%d\n", 999999999);
    printf("%d\n", 999999999);
    _printf("%d\n", 00042);
    printf("%d\n", 00042);
    _printf("%d\n", 'A'); 
    printf("%d\n", 'A');
    _printf("100%% complete\n");
    printf("100%% complete\n");
    _printf("%s\n", NULL);
    _printf("%s\n", "This is a very long string to test performance and ensure it prints correctly.");
    printf("%s\n", "This is a very long string to test performance and ensure it prints correctly.");
    _printf("%d");
    printf("%d");
    return (0);
}
