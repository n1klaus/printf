#include "main.h"
/**
 * print_binary - print numbers in base 2 (binary)
 * @a: element of va_list type
 * @s: buffer
 * @index: position on buffer
 * Return: number of "characters" of element printed
 */
int print_binary(va_list a, char *s, int *index)
{
	int x, c, d, y = 0, aux = 0;
	int arr[32] = {0};

	aux = va_arg(a, int);
	x = aux;/* The original decimal number*/
	if (aux == 0)
	{
		set_buffer(s, '0', index);
		return (1);
	}
	if (aux < 0)
	{
		x = -(x + 1);/*Add 1 to obtain two's complement*/
	}
	for (c = 0; x > 0; c++)/*Divide the number by 2 and store in the array*/
	{
		arr[c] = x % 2;
		x = x / 2;
	}
	if (aux >= 0)
	{
		for (d = c - 1; d >= 0; d--)/*Prints since the last to the 1st pos*/
		{
			set_buffer(s, ('0' + arr[d]), index);
			y++;
		}
	}
	else
	{
		for (d = 31; d >= 0; d--)/*Finds the one's complement for the number*/
		{
			if (arr[d] == 1)
				arr[d] = 0;
			else if (arr[d] == 0)
				arr[d] = 1;
			set_buffer(s, ('0' + arr[d]), index);
			y++;
		}
	}
	return (y);
}
