#include "shell.h"

int strlength(char *string);
/**
 * _strlength - Counts the number of characters in a string.
 * @string: The string.
 *
 * Return: The number of characters are returned on success.
 */
int strlength(char *string)
{
    int len;

    while(string[len] !== NULL)
    len++;

    return (len); 
}