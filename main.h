#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct op - flag / function object
 * @c: flag
 * @f: function
 */
typedef struct op
{
	char *c;
	int (*f)(va_list);
} op_t;


int _putchar(char c);
int _printf(const char *format, ...);
int (*get_funct(char s))(va_list ap);
int print_c(va_list ap);
int print_s(va_list ap);
int print_d(va_list ap);
int print_i(va_list ap_num);
int print_b(va_list bin_list);
int print_u(va_list ap);
int print_o(va_list ap);
int print_x(va_list ap);
int print_X(va_list ap);

#endif
