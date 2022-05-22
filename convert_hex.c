#include "main.h"
/**
 * convert_hex - convert to printable hexadecimal lowercase
 * @a: the array to be analized
 * @b: size of array
 * @s: buffer
 * @index: position on buffer
 * Return: number of "characters" of element called
 */
int convert_hex(int *a, int b, char *s, int *index)
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
		h[y] = switch_hex(sum, h, y);
		y++;
	}
	for (j = y - 1; j >= 0; j--)
	{
		if (h[j] == 'a' || h[j] == 'b' || h[j] == 'c' || h[j] == 'd'
			|| h[j] == 'e' || h[j] == 'f')
			set_buffer(s, h[j], index);
		else
			set_buffer(s, (h[j] + '0'), index);
	}
		return (y);
}
