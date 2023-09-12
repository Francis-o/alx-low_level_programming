#include "main.h"

/**
 * print_last_digit - Task 7
 * Description _ prints the last digit of number
 * @n: Takes in integer value
 * Return: last digit value
 */

int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
