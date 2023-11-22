#include "main.h"

/**
 * string_toupper -changes all lowercase letters of a string to uppercase.
 * @: the string to be changed
 *
 * Return : 0
 */
char *string_toupper(char *)
{
    int i;
    char str*;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    return (str);
}
