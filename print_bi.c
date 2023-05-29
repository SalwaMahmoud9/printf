#include "main.h"

/**
*print_bi - print binary num
*@list: points to list of arguments
*@pCount: pointer to counter
*Return: value
*/
int print_bi(va_list list, __attribute__((unused))int *pCount)
{
	unsigned int num = va_arg(list, unsigned int);
	char buffer[32];
	int i;

	i = 0;
	if (num == 0)
	{
		_putchar('0');
		(*pCount)++;
		return (1);
	}
	for (i = 0; num > 0; i++)
	{
		buffer[i] = (num % 2) + '0';
		num /= 2;
	}

	i--;
	for (; i >= 0; i--)
	{
		_putchar(buffer[i]);
		(*pCount)++;
	}
	return (0);
}
