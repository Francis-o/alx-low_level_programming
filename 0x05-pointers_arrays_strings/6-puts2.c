#include "main.h"

/**
 * puts2 - strats with first character and prints everyother char
 * @str: input
 */

void puts2(char *str)
{
	int str_len = 0;
	int i = 0;
	char *y = str;
	int j;

	while (*y != '\0')
	{
		y++;
		str_len++;
	}
	i = str_len - 1;
	for (j = 0 ; j <= i ; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
