#include "main.h"
/**
 * print_unsigned - print unsigned decimal
 * @a: element of va_list type
 * @s: buffer
 * @index:position on buffer
 * Return: number of "characters" of element called
 */
int print_unsigned(va_list a, char *s, int *index)
{
	int x;
	unsigned int u;
	unsigned int j, cont = 1;
	unsigned int var1, num, var2, var3 = 1;
	int  y = 0;

	x = (va_arg(a, int));

	u = x;
	var2 = u;
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
