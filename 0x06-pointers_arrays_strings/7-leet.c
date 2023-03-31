#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string to be evaluated
 *
 * Return: pointer to str
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char al[11] = "aAeEoOtTlL";
	int no[10] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	while (str[i] != '\0')
	{
		while (j < 10)
		{
			if (str[i] == al[j])
			{
				str[i] = no[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
