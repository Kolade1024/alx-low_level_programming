#include "main.h"
/**
 * _isalpha - checks  alphabets
 * @c: checked character
 *
 * Return: 1 if character is a letter else return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a'a && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}