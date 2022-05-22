#include "main.h"
/**
 * print_address - print adress using binary code
 * @a: num to analyze
 * @s: array
 * @index: place in the array
 * Return: number of "characters" of element called
 */
int print_address(va_list a, char *s, int *index)
{
	void *p1;
	long int t = 0, var;
	int i, j, z = 0, k = 0;
	char *n = "(nil)", *hex = "0123456789abcdef", arr[16] = "";

	p1 = va_arg(a, void *);
	if (!p1)
	{
		while (n[z] != '\0')
		{
			set_buffer(s, n[z], index);
			z++;
		}
		return (z);
	}
	t = (long int) p1;
	set_buffer(s, '0', index);
	set_buffer(s, 'x', index);

	for (i = 0; i < (int)(sizeof(void *) * 2); i++)
	{
		var = t & 0x0F;
		arr[i] = hex[var];
		t = t >> 4;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (arr[j] != '0')
			break;
	}
	for (; j >= 0; j--)
	{
		k++;
		set_buffer(s, arr[j], index);
	}
	return (k + 2);
}
