#include "main.h"

/**
 * _memset - fill memory with constant byte
 * @s: pointer
 * @b: char
 * @n: int
 * Return: changed array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
