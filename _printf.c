#include "main.h"

/**
 * _printf - is a function that printing every specifier
 * @format: is the string to be copied and be
 * checked if there are any specifiers
 * Return: The Counter Of Printed Charecters
 */

int _printf(const char *format, ...)
{
	mystruct a[] = {
{"%c", printf_c}, {"%s", printf_string}, {"%%", printf_per},
{"%r", printf_rev}, {"%d", printf_dec}, {"%i", printf_int}
};

	va_list mylist;
	int counter = 0, i = 0, x;

	va_start(mylist, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
HERE:
	while (format[i] != '\0')
	{
		x = 5;
		while (x >= 0)
		{
			if (a[x].spec[0] == format[i] && a[x].spec[1] == format[i + 1])
			{
				counter += a[x].func(mylist);
				i = i + 2;
				goto HERE;
			}
		x--;
		}
		_putchar(format[i]);
		counter++;
		i++;
	}
	va_end(mylist);

	return (counter);
}
