#include "holberton.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: content is to be copied
 * @to: string
 */

void set_string(char **s, char *to)
{
	*s = to;
}
