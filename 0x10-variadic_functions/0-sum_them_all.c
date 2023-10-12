#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all parametrs
 * @n: The number of parameters passed
 * @...: variable number of parameters
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, count);
	for (i = 0; i < count; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
