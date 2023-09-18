#include "main.h"

/**
 * print_rev - prints str in reverse
 * @s: str
 */

void print_rev(char *s)
{
	int str_len = 0;
	int i;

	while (*s != '\0')
	{
		str_len++;
		s++;
	}
	s--;
	for (i = str_len; o > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
