#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints lower alphabets except e and q
 * Return: 0
 */

int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		if (i == 'q' or i == 'e')
		{
			continue;
		}
		else
		{
			putchar(alph[i]);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
