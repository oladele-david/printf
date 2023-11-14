#include "main.h"

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Description: Returns a pointery,
 *  * and can be freed for free().
 *  Return: A pointer.
 */
char *_strdup(const char *str)
{
	char *dup_str;
	int i = 0;

	if (str == NULL)
		return (NULL);

	dup_str = malloc(_strlen(str) + 1);

	if (dup_str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		dup_str[i] = str[i];
		i++;
	}
	dup_str[i] = '\0';

	return (dup_str);
}
