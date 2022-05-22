#include "main.h"
/**
 * _putchar - print characters to stdout
 * @c : character
 * Return: number of "characters" of element called
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
