#include "shell.h"

/**
 * interactive - Check if the shell is in interactive mode.
 * @info: Address of the info_t struct.
 *
 * Return: 1 if in interactive mode, 0 otherwise.
 */
int interactive(info_t *info)
{
    return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - Check if a character is a delimiter.
 * @c: The character to check.
 * @delim: The delimiter string.
 *
 * Return: 1 if true, 0 if false.
 */
int is_delim(char c, char *delim)
{
    while (*delim)
        if (*delim++ == c)
            return 1;
    return 0;
}

/**
 * _isalpha - Check if a character is alphabetic.
 * @c: The character to check.
 *
 * Return: 1 if c is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to be converted.
 *
 * Return: 0 if no numbers in the string, converted number otherwise.
 */
int _atoi(char *s)
{
    int i, sign = 1, flag = 0, output;
    unsigned int result = 0;

    for (i = 0; s[i] && flag != 2; i++)
    {
        if (s[i] == '-')
            sign *= -1;

        if (s[i] >= '0' && s[i] <= '9')
        {
            flag = 1;
            result = result * 10 + (s[i] - '0');
        }
        else if (flag == 1)
            flag = 2;
    }

    output = (sign == -1) ? -result : result;

    return output;
}
