#include "../main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int len1, len2;

    len1 = _printf("%d\n", INT_MIN);
    len2 = printf("%d\n", INT_MIN);

    printf("_printf returned: %d\n", len1);
    printf("printf returned: %d\n", len2);

    return (0);
}
