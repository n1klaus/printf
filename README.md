 **Description**
 
 printf is a well known function used in C programming to do formated printing. Usually it only takes the standard library to call it into a c program, and using it for simple strings or formatted specifiers that allow us to print diferent types of data. See man of printf to understand how printf works.
 | File  | Format Specifier | Description   |
| ------------ | ------------ | ------------ |
| print_char.c |%c| prints characters.|
| print_string.c |%s| prints strings.|
| print_integer.c |%d| prints decimal numbers.|
| print_integer.c |%i| prints integers numbers.|
| print_binary.c |%b| prints binary from unsigned int.|
| print_unsigned.c |%u| prints an unsigned decimal number.|
| print_octal.c |%o| prints a number in octal (base8).|
| print_hex.c |%x| prints a number in hexadecimal (base 16).|
| print_HEX.c |%X| prints a number in uppercase hexadecimal.|
| print_address.c |%p| prints the address of a pointer.|
| print_reverse.c |%r| prints the reverse of a string.|
| print_ROT13.c |%R| prints a string in ROT13 base.|
 
 **Prototype**
 
 int _printf(const char *format, ...)

**Compilation**

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

**Contributors**

Nick Nyanjui

Mitchel Njeri Gitau

