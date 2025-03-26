#include "../main.h"
#include <stdio.h>

int main(void)
{
    int len1, len2;
    char c = 'A';
    char *str = "Hello, world!";
    int num = 42;
    int neg_num = -9876;

    /* Basic string test */
    char * test1 = "Custom: %s\n";
    len1 = _printf(test1, str);
    len2 = printf(test1, str);
    printf("Lengths: _printf = %d, printf = %d\n\n", len1, len2);

    /* Character test */
    len1 = _printf("Custom char: %c\n", c);
    len2 = printf("Custom char: %c\n", c);
    printf("Lengths: _printf = %d, printf = %d\n\n", len1, len2);

    /* Percent sign test */
    len1 = _printf("Custom percent: %%\n");
    len2 = printf("Custom percent: %%\n");
    printf("Lengths: _printf = %d, printf = %d\n\n", len1, len2);

    /* Integer (%d and %i) tests */
    len1 = _printf("Custom integer: %d\n", num);
    len2 = printf("Custom integer: %d\n", num);
    printf("Lengths: _printf = %d, printf = %d\n\n", len1, len2);

    len1 = _printf("Custom integer with %%i: %i\n", num);
    len2 = printf("Custom integer with %%i: %i\n", num);
    printf("Lengths: _printf = %d, printf = %d\n\n", len1, len2);

    /* Negative integer test */
    len1 = _printf("Custom negative integer: %d\n", neg_num);
    len2 = printf("Custom negative integer: %d\n", neg_num);
    printf("Lengths: _printf = %d, printf = %d\n\n", len1, len2);

    /* Edge cases */
    len1 = _printf("Empty string: %s\n", "");
    len2 = printf("Empty string: %s\n", "");
    printf("Lengths: _printf = %d, printf = %d\n\n", len1, len2);

    len1 = _printf("NULL string: %s\n", (char *)NULL);
    len2 = printf("NULL string: %s\n", (char *)NULL);
    printf("Lengths: _printf = %d, printf = %d\n\n", len1, len2);

    return (0);
}
