#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out alphabets in lower case
 * Return: 0
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		putchar(alp[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
