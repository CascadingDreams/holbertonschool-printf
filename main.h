#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _printstring(char *str);
int _formatstring(char *str, int count);
int handle_format(char format, va_list args, int count);
int _printnumber(int n);

#endif
