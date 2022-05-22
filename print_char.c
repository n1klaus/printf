#include "main.h"
/**
 * print_char - print characters
 * @a: element of va_list type
 * @s: buffer
 * @index: position on buffer
 * Return: number of "characters" of element called
 */
int print_char(va_list a, char *s, int *index)
{
	int x;

	x = va_arg(a, int);
	set_buffer(s, x, index);
	return (1);
}
