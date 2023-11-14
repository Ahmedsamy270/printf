#include "main.h"

/**
 * printf_dec - is a function that prints an decimal numbers
 * @mylist: is a list of a stored arguments.
 * Return: Counter Of Counted Charecters Number.
 */

int printf_dec(va_list mylist)
{
	int a = va_arg(mylist, int);
	int number, lastnumber = a % 10, exp = 1, dig, counter = 1;

	a = a / 10;
	number = a;
	if (lastnumber < 0)
	{
		_putchar('-');
		number = -number;
		a = -a;
		lastnumber = -lastnumber;
		counter++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
		number = a;
		while (exp > 0)
		{
			dig = number / exp;
			_putchar(dig + '0');
			number = number - (dig * exp);
			exp = exp / 10;
			counter++;
		}
	}
	_putchar(lastnumber + '0');
	return (counter);
}

/**
 * printf_int - is a function that prints an intgers
 * @mylist: is a list of stored argument
 * Return: Counter Of The Printed Charecters
 */

int printf_int(va_list mylist)
{
	int a = va_arg(mylist, int);
	int number, lastnumber = a % 10, exp = 1, dig, counter = 1;

	a = a / 10;
	number = a;
	if (lastnumber < 0)
	{
		_putchar('-');
		number = -number;
		a = -a;
		lastnumber = -lastnumber;
		counter++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
		number = a;
		while (exp > 0)
		{
			dig = number / exp;
			_putchar(dig + '0');
			number = number - (dig * exp);
			exp = exp / 10;
			counter++;
		}
	}
	_putchar(lastnumber + '0');
	return (counter);
}
