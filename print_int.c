#include "main.h"

/**
*print_int - print int
*@list: args list pointer
*@count: counter pointer
*Return: value
*/
int print_int(va_list list, int *count)
{
	unsigned int  num = va_arg(list, int);

	_putInt(num, count);

	return (0);
}
