#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} match_convert;

int pointer_printf(va_list val);
int hex_aux_printf(unsigned long int num);
int hex_AUX_printf(unsigned int num);
int string_exe_printf(va_list val);
int printf_HEX_fun(va_list val);
int printf_hex_fun(va_list val);
int oct_printf(va_list val);
int unsigned_printf_fun(va_list args);
int bin_funct(va_list val);
int reverse_string(va_list args);
int rot13_print(va_list args);
int int_funct(va_list args);
int dec_print(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_37(void);
int char_print(va_list val);
int string_print(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
