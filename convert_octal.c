#include "main.h"
/**
 * convert_octal - convert to printable octal
 * @a: array to be analized
 * @b: size of array
 * @s: buffer
 * @index:position on buffer
 * Return: number of "characters" of element called
 */
int convert_octal(int *a, int b, char *s, int *index)
{
	int c = 0, y = 0;
	int sum = 0, i, j;
	int octal[11] = {0};

	while (c < b)
	{
		sum = 0;
		for (i = 0; i < 3; i++)
		{
			if (i == 0 && c < b)
			{
				sum = sum + a[c];
				c++;
			}
			else if (i != 0 && c < b)
			{
				sum = sum + (2 * i * a[c]);
				c++;
			}
			else
				break;
		}
		octal[y] = sum;
		y++;
	}
	for (j = y - 1; j >= 0; j--)
		set_buffer(s, (octal[j] + '0'), index);
	return (y);
}
