#include "main.h"
/**
 * convert_HEX - convert to printable hexadecimal uppercase
 * @a: the array to be analized
 * @b: size of array
 * @s: buffer
 * @index: position on buffer
 * Return: number of "characters" of element called
 */
int convert_HEX(int *a, int b, char *s, int *index)
{
	int c = 0, y = 0, mul = 1;
	int sum = 0, i, j;
	int h[8] = {0};

	while (c < b)
	{
		sum = 0;
		for (i = 0; i < 4; i++)
		{
			if (i == 0 && c < b)
			{
				sum = sum + a[c];
				mul = 2;
				c++; }
			else if (i != 0 && c < b)
			{
				sum = sum + (mul * a[c]);
				c++;
				mul = 2 * mul; }
			else
				break;
		}
		h[y] = switch_HEX(sum, h, y);
		y++;
	}
	for (j = y - 1; j >= 0; j--)
	{
		if (h[j] == 'A' || h[j] == 'B' || h[j] == 'C' || h[j] == 'D'
			|| h[j] == 'E' || h[j] == 'F')
			set_buffer(s, h[j], index);
		else
			set_buffer(s, (h[j] + '0'), index);
	}
		return (y);
}
