#include "main.h"
/**
 * switch_HEX - switch to print the hexa char selection in uppercase
 * @sum: num to analyze
 * @h: array
 * @y: spaces of the array
 * Return: number of "characters" of element called
 */
int switch_HEX(int sum, int *h, int y)
{
	switch (sum)
		{
		case 10:
			h[y] = 'A';
			break;
		case 11:
			h[y] = 'B';
			break;
		case 12:
			h[y] = 'C';
			break;
		case 13:
			h[y] = 'D';
			break;
		case 14:
			h[y] = 'E';
			break;
		case 15:
			h[y] = 'F';
			break;
		default:
			h[y] = sum;
		}
	return (h[y]);
}
