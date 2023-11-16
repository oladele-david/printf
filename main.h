#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _itoa(int num, char *str, int base);
int _puts(const char *str);
int _putchar(char x);
int _printf(const char *format, ...);

#endif /* MAIN_H */
