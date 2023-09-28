#include "main.h"

/**
 * _strlen_recursion - calculates length of str
 * @s: str
 * Return: length of str
 */

int _strlen_recursion(char *s)
{
	int lent = 0;

	if (*s)
	{
		lent++;
		lent += _strlen_recursion(s + 1);
	}

	return (lent);
}
