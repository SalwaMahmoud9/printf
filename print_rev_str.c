#include "main.h"

/**
*print_rev - reverse string
*@list: list of arguments
*@count: counter pointer
*Return: value
*/
int print_rev_str(va_list list, int *count)
{
	int i;
	char *str = va_arg(list, char *);
 
	if (str == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = _strlen(str) - 1; i >= 0; i--)
		{
			_putchar(str[i]);
			*count += 1;
		}
	}
	return (0);
}
