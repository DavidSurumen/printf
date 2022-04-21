#include "main.h"

/**
 * print_d - prints decimal digits (%d)
 *
 * @ap: store the value arguments
 * Return: count of printed numbers
 */
int print_d(va_list ap)
{
	unsigned int num_abs, aux_num, count_zero, count;
	int numbers;

	count = 0;
	numbers = va_arg(ap, int);

	if (numbers < 0)
	{
		num_abs = (numbers * -1);
		count += _putchar(45);
	}
	else
		num_abs = numbers;

	aux_num = num_abs;
	count_zero = 1;

	while (aux_num > 9)
	{
		aux_num /= 10;
		count *= 10;
	}

	while (count_zero >= 1)
	{
		count += _putchar(((num_abs / count_zero) % 10) + '0');
		count_zero /= 10;
	}
	return (count);
}

/**
 * print_i - print the integers (%i)
 * @ap_num: stores list numbers
 * Return: number print
 */
int print_i(va_list ap_num)
{
	return (print_d(ap_num));
}
