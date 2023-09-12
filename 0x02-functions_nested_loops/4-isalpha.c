#include "main.h"

/**
 * _isalpha - Task 4
 * Description - takes char and return 1 if alphabet.
 * @c: takes in char value.
 * Return: 1 if c is a letter otherwise 0.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

