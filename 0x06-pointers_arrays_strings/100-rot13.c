#include "main.h"
/**
 * rot13 - encodes a string into rot13
 * @str: string to be evaluated
 *
 * Return: pointer to str
 */

char *rot13(char *str)
{
	int i = 0;
	int j = 0;
	char *alp = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *pla = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	while (str[i] != '\0')
		{
		while (j < 26)
		{
			if (str[i] == alp[j])
			{
				str[i] = pla[i];
			}
			j++;
		}
		i++;
		}
	return (str);
}
