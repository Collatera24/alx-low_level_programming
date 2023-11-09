#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - Calculates the total of parameters & return result
 * @n: The amount of paramters supplied to the function.
 * @...: A variable quantity of paramters to compute the sum for
 * Return: 0 if the value of n is = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
