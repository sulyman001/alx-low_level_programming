#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: buffer to be overwritten
 * @src: string to be evaluated
 * @n: number of bytes to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, s2 = 0;

	while (src[i++])
		s2++;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
