#include "main.h"

/**
 * print_sign - Task 5
 * Description - prints the sign of a number
 * @n: taskes number as input
 * Return: ruturns sign of number
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
