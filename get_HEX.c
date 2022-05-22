#include "main.h"
/**
 * get_HEX - prints 2 digits hex
 * @a: element of va_list type
 * @s: buffer
 * @index:position on buffer
 * Return: number of "characters" of element called
 */
int get_HEX(int a, char *s, int *index)
{
	int temp, a3[2] = {0};
	int i = 0, j;

	for (; i < 2; i++)
	{
		temp = a % 16;
		if (temp >= 10)
		{
			a3[i] = switch_HEX(temp, a3, i);
		}
		else
		{
			a3[i] = temp;
		}
		a = a / 16;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (a3[j] == 'A' || a3[j] == 'B' || a3[j] == 'C' || a3[j] == 'D'
			|| a3[j] == 'E' || a3[j] == 'F')
			set_buffer(s, a3[j], index);
		else
			set_buffer(s, (a3[j] + '0'), index);
	}
	return (2);
}
