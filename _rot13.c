#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: The encode.
 *
 * Description:to each character in the
 *
 *
 * Return: 
 */
char *rot13(char *s)
{
	int i, j;
	char *map1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *map2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; map1[j] != '\0'; j++)
		{
			if (s[i] == map1[j])
			{
				s[i] = map2[j];
				break;
			}
		}
	}

	return (s);
}
