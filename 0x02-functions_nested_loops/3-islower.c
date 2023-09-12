#include "main.h"

/**
 * _islower - returns 1 if uppercase and 0 if lower
 * @c: alphabet
 * Return: returns 1 if lower or otherwise 0
 */

int _islower(int c)
{
	int result;

	if (c > 'Z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
