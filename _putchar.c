#include <unistd.h>

/**
 * _putchar - prints character to stdout
 * @c: character to be printed
 *
 * Return: 1 if success, -1 if error and set appropriate
 *	errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
