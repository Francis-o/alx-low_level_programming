#include "main.h"

/**
 * _isupper - Task 0
 * Description - checks for uppecase char
 * @n: int c
 * Return: 1 if upper or otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
