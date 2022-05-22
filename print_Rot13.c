#include "main.h"
/**
 * print_Rot13 - printRot13
 * @a: num to analyze
 * @s: array
 * @index: place in the array
 * Return: number of "characters" of element called
 */
int print_Rot13(va_list a, char *s, int *index)
{
	int i = 0, j, c;
	char *str = va_arg(a, char *);
	char arr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (str[i] == arr[j])
			{
				set_buffer(s, rot[j], index);
				c++;
				break;
			}
		}
		if (!arr[j])
		{
			set_buffer(s, str[i], index);
			c++;
		}
		i++;
	}
	return (c);
}
