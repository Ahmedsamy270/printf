#include "main.h"
#include <unistd.h>
/**
 * _putchar - is function to print a char per time
 * @c: is the charecter to be printed
 * Return: Printed Charecter
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
