#include "main.h"

/**
 * print_c - print character (%c)
 * @ap: stores list of characters
 * Return: number of parameters printed
 */
int print_c(va_list ap)
{
	int c = va_arg(ap, int);

	return (_putchar(c));
}


/**
 * print_s - print string of characters (%s)
 * @ap: stores the list of characters
 * Return: number of parameters printed
 */
int print_s(va_list ap)
{
	int i, count = 0;
	char *str;

	str = va_arg(ap, char*);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		count += _putchar(str[i]);

	return (count);
}
