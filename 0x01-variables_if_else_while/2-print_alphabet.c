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
		putschar(alp[i]);
		i++;
	}
	putschar('\n');
	return (0);
}
