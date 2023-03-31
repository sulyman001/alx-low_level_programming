#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: string to be evaluated
 * @s2: string to be evaluated
 *
 * Return: 1 for true, 0 for false
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
