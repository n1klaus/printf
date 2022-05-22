#include "main.h"
/**
 * print_percent - print character %
 * @a: element of va_list type
 * @s: buffer
 * @index: position on buffer
 * Return: number of "characters" of element called
 */
int print_percent(va_list a, char *s, int *index)
{
	(void)a;
	set_buffer(s, '%', index);
	return (1);
}
