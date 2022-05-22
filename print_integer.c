#include "main.h"
/**
 * print_integer - print numbers in base 10 (integers)
 * @a: element of va_list type
 * @s: buffer
 * @index: position on buffer
 * Return: number of "characters" of element called
 */
int print_integer(va_list a, char *s, int *index)
{
	unsigned int j, cont = 1;
	unsigned int var1, num, var2, var3 = 1;
	int x, y = 0;

	x = va_arg(a, int);
	var2 = x;

	if (x < 0)
	{
		set_buffer(s, '-', index);
		var2 = x * (-1);
		y++;
	}
	num = var2;
	while (num > 9)
	{
		num = num / 10;
		cont++;
																		var3 = var3 * 10;
	}
	for (j = 1; j <= cont; j++)
	{
		var1 = var2 / var3;
		var2 = var2 % var3;
		var3 = var3 / 10;
		y++;
		set_buffer(s, ('0' + var1), index);
	}
	return (y);
}
