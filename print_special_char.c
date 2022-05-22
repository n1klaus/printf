#include "main.h"
/**
 * print_special_char - print an alternative to a non printable char
 * @a: element of va_list type
 * @s: buffer
 * @index:position on buffer
 * Return: number of "characters" of element called
 */
int print_special_char(va_list a, char *s, int *index)
{
	int i;
	int c = 0;
	char *str = va_arg(a, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			set_buffer(s, '\\', index);
			set_buffer(s, 'x', index);
			c += 2;
			c += get_HEX((str[i]), s, index);
		}
		else
		{
			set_buffer(s, str[i], index);
			c++;
		}
	}
	return (c);
}
