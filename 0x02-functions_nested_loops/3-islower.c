#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: Character
 * Return: 1if the letter is lower case, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
