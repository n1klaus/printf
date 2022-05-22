#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
/**
 * struct a - this structure is going to give us the format
 * @c: the character that is going to give us the respective function
 * @p: function pointer with va_list argument
 */
typedef struct a
{
	    char c;
	    int (*p)(va_list list, char *s, int *index);
} choose;
int _printf(const char *format, ...);
int _putchar(char c);
void set_buffer(char *s, char x, int *index);
int (*get_function(char c))(va_list a, char *s, int *index);
int print_char(va_list a, char *s, int *index);
int print_string(va_list a, char *s, int *index);
int print_percent(va_list a, char *s, int *index);
int print_integer(va_list a, char *s, int *index);
int print_binary(va_list a, char *s, int *index);
int print_unsigned(va_list a, char *s, int *index);
int convert_octal(int *a, int b, char *s, int *index);
int print_octal(va_list a, char *s, int *index);
int get_HEX(int a, char *s, int *index);
int convert_hex(int *a, int b, char *s, int *index);
int convert_HEX(int *a, int b, char *s, int *index);
int print_hex(va_list a, char *s, int *index);
int print_HEX(va_list a, char *s, int *index);
int print_special_char(va_list a, char *s, int *index);
int switch_hex(int sum, int *h, int y);
int switch_HEX(int sum, int *h, int y);
int print_Rot13(va_list a, char *s, int *index);
int print_reverse(va_list a, char *s, int *index);
int print_address(va_list a, char *s, int *index);
#endif /* MAIN_H */
