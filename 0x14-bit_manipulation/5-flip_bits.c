#include "main.h"

/**
 * flip_bits - Returns number of bits to flip to get from one num to another
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r_result = n ^ m;
	unsigned int count = 0;

	while (r_result > 0)
	{
		count += r_result & 1;
		r_result >>= 1;
	}
	return (count);
}