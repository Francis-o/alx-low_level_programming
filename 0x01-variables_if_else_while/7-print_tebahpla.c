#include <stdio.h>

/**
 * main - prints lower alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char ch = 'z';

	for (ch >= 'a'; ch--;)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
