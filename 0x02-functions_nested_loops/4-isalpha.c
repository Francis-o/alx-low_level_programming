#include "main.h"

/**
 * _isalpha - Task 4
 * Description - takes char and return 1 if alphabet.
 * @c: takes in char value.
 * Return: 1 if c is a letter otherwise 0.
 */

int _isalpha(int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
