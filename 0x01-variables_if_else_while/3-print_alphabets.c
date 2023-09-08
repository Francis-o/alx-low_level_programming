#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints lower and upper alphabets
 * Return: 0
 */

int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 52, i++)
	{
		if (i < 26)
		{
			putchar(alph[i]);
		}
		else
		{
			putchar(toupper(alph[i]));
		}
	}
	putchar('\n');
	return (0);
}
