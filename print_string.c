#include "main.h"
/**
 * print_string - print strings
 * @a: element of va_list type
 * @s: buffer
 * @index: position on buffer
 * Return: number of "characters" of element called
 */
int print_string(va_list a, char *s, int *index)
{
	char *x;
	int y = 0;
	int c = 0;

	x = va_arg(a, char *);
	if (!x)
		x = "(null)";
	while (x[c])
	{
		set_buffer(s, x[c], index);
		c++;
		y++;
	}
	return (y);
}
