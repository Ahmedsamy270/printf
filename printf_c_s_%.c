#include "main.h"

/**
 * printf_c - is a function that prints a single charecter per time
 * @mylist: is a list of the stored arguments
 * Return: Number of Printed Charecter
 */

int printf_c(va_list mylist)
{
	char x = va_arg(mylist, int);

	_putchar(x);
	return (1);
}

/**
 * printf_string - is a function that prints a string
 * @mylist: is a list of the stored arguments
 * Return: Number of Printed Charecters
 */

int printf_string(va_list mylist)
{
	const char *s = va_arg(mylist, const char *);
	int a = 0, i;

	if (s == NULL)
	{
		s = "(null)";
		a = _strlen(s);
		for (i = 0; i < a; i++)
			_putchar(s[i]);
		return (a);
	}

	else
	{
		a = _strlen(s);
		for (i = 0; i < a; i++)
			_putchar(s[i]);
		return (a);
	}

}

/**
 * printf_per - is a function that prints the percentage sign
 * Return: Count Of Printed Charecter
 *
 */

int printf_per(void)
{
	_putchar(37);
	return (1);
}
