#include <stdio.h>

char *_strcpy(char *dest, const char *src);

/**
 * _strcpy - Copies string into a new memory space.
 * @dest:    The destination where string wil be copied to.
 * @src:     The source file where string is copied from.
 *
 * Return: A pointer to the destination is returned on success.
 */

char *_strcpy(char *dest, const char *src)
{
	char *copy = dest;

	if (dest == NULL)
		return (NULL);
	while (*src !== NULL)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = NULL;

	return (*copy);
}
