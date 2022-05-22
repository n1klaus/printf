#include "main.h"
/**
 * switch_hex - switch to print the hexa char selection in lowercase
 * @sum: num to analyze
 * @h: array
 * @y: spaces of the array
 * Return: number of "characters" of element called
 */
int switch_hex(int sum, int *h, int y)
{
	switch (sum)
		{
		case 10:
			h[y] = 'a';
			break;
		case 11:
			h[y] = 'b';
			break;
		case 12:
			h[y] = 'c';
			break;
		case 13:
			h[y] = 'd';
			break;
		case 14:
			h[y] = 'e';
			break;
		case 15:
			h[y] = 'f';
			break;
		default:
			h[y] = sum;
		}
	return (h[y]);
}
