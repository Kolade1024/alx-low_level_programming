#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints _putchar
 * @c: prints character
 * Return: 1 when successful
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
