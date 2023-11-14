#include "main.h"

/**
 * printf_rev - is a function that prints a string in reverse
 * @mylist: is a list of stored arguments
 * Return: Counter Of The Counted Printed Charecters
 */

int printf_rev(va_list mylist)
{
	const char *rev = va_arg(mylist, const char *);
	int i, y, counter = 0;

	if (rev == NULL)
		rev = "(null)";
	for (i = 0; rev[i] != '\0'; i++)
		y++;
	for (i = y - 1; i >= 0; i--)
	{
	_putchar(rev[i]);
	counter++;
	}
	return (counter);
}
