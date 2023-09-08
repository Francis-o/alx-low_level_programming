#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints lower and upper alphabets
 * Return: 0
 */

int main(void)
{
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i < 52)
	{
		putchar(alph[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
