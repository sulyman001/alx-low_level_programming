#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: string to be overwritten
 * @src: string to be appended
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, s1, s2;

	i = j = 0;
	s1 = s2 = 0;
	while (dest[i++] != 0)
		s1++;
	while (src[j++] != 0)
		s2++;
	i = j = 0;
	while (i <= s2)
	{
		dest[s1++] = src[i++];
	}
	return (dest);
}
