#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: string to be overwritten
 * @src: string to be appended
 * @n: number of bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	int s1 = 0, s2 = 0;

	while (dest[i++] != 0)
		s1++;
	while (src[j++] != 0)
		s2++;
	if (n >= s2)
		n = s2;
	i = j = 0;
	while (i < n)
	{
		dest[s1++] = src[i++];
	}
	return (dest);
}
