#include "main.h"

/**
 * _strchr - Locate character in str.
 * @s: The string to search.
 * @c: The character for find.
 *
 * Desc: Returns pointers to first occurrence of the character
 * @returns NULL.
 *
 * Return:matched null  character or null.
 */
char *_strchr(const char *s, int c)
{
	char *tmp_str = (char *) s;

	
	if (tmp_str == NULL)
		return (NULL);

	while (*tmp_str != '\0')
	{
		if (*tmp_str == c)
			return (tmp_str); 
		tmp_str++;
	}
	
	if (c == '\0')
		return (tmp_str);

	return (NULL); 
}
