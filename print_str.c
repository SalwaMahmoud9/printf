#include "main.h"
/**
*print_str - print string
*@list: args list pointer
*@count: counter pointer
*Return: value
*/
int print_str(va_list list, int *count)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";

	if (_putstr(str, _strlen(str)) != -1)
		*count += _strlen(str);
	else
		return (-1);

	return (1);
}

/**
*print_ch - print character
*@list: args list pointer
*@count: counter pointer
*Return: value
*/
int print_ch(va_list list, int *count)
{

	if (_putchar((unsigned char)va_arg(list, int)) == -1)
		return (-1);
	else
		*count += 1;

	return (1);
}
