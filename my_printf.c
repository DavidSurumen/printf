#include "main.h"

/**
 * _printf - implementation of the standard library printf
 *
 * @format: format string to print
 *
 * Return: count of characters printed
 */
int _printf(const char *format, ...)
{
	int count = -1;

	if (format != NULL)
	{
		int i;
		va_list ap;
		int (*o)(va_list);

		va_start(ap, format);

		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		count = 0;

		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count += _putchar(format[i]);
					i++;
				}
				else if (format[i + 1] != '\0')
				{
					o = get_funct(format[i + 1]);
					count += (o ? o(ap) : _putchar(format[i]) + _putchar(format[i + 1]));
					i++;
				}
			}
			else
				count += _putchar(format[i]);
		}
		va_end(ap);
	}
	return (count);
}
