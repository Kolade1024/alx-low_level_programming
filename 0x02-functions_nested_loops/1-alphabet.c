#include "main.h"

/**
 * print_alphabet - prints all aphabets in lower case
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');
}