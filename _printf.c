#include "main.h"
/**
 * _printf - prints depends of the arguments.
 * @format: s for string, c for char, d for decimals, i for integers,
 * b for cast to binary, u for cast to unsigned decimal, o for print
 * in octal, x for lowercase Hexadecimal, X for Uppercase Hexadecimal,
 * p to print adresses
 * Return: new string.
 */
int _printf(const char *format, ...)
{
	int c1 = 0, w = 0, x = -1, (*f)(va_list, char *s, int *m);
	int *index;
	char *s;
	va_list elements;

	va_start(elements, format);
	s = malloc(1024);
	index = &w;
	if (!s)
		return (-1);
	if (format)
	{
		x = 0;
		for (; format[c1] != '\0'; c1++, x++)
		{
			if (format[c1] != '%')
				set_buffer(s, format[c1], index);
			else if (format[c1] == '%' && format[c1 + 1] == '\0')
			{
				return (-1);
			}
			else if (format[c1] == '%' && format[c1 + 1] != '\0')
			{
				f = get_function(format[c1 + 1]);
				if (f)
				{
					x = (x + f(elements, s, index)) - 1;
					c1++;
				}
				else
					set_buffer(s, format[c1], index);
			}
		}
	}
	if (*index != 1024)
		write(1, s, *index);
	free(s);
	va_end(elements);
	return (x);
}
