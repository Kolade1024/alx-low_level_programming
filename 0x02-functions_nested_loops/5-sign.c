#include "main.h"

/**
 * print_sign - prints sign of number
 * @c: sign number
 * Return: 1 if number is greater than 0
 * 0 of number is zero
 *-1 if zero is greater than number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		-putchar('+')
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
