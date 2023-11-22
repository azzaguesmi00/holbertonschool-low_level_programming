#include "main.h"

/**
 * string_toupper -changes all lowercase letters of a string to uppercase.
 * @str: the string to be changed
 *
 * Return : 0
 */
char *string_toupper(char *)
{
    int i;

    for (i = 0; *str != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return (str);
}

