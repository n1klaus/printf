#include "main.h"
/**
 * get_function - gets the function according to specifier
 * @c: char to find
 * Return: return a function; or NULL if empty
 */
int (*get_function(char c))(va_list a, char *s, int *index)
{
	int c1;
	choose l[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_integer},
		{'d', print_integer},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_HEX},
		{'S', print_special_char},
		{'R', print_Rot13},
		{'r', print_reverse},
		{'p', print_address},
		{'\0', NULL}
	};
	for (c1 = 0; l[c1].c != '\0'; c1++)
	{
		if (c == l[c1].c)
		{
			return (l[c1].p);
		}
	}
	return (NULL);
}
