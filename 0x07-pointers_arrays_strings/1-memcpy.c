#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: memory location
 *@src: memory copy location
 *@n: number of bytes
 *Return: memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
