#include "main.h"

/**
*put_hex_upper - print put hex upper
*@num: number
*@count: counter pointer
*Return: value
*/
int put_hex_upper(int num, int *count)
{
	char buffer[32];
	int i = 0;
	int count2 = 0;
	char hex_digits[] = "0123456789ABCDEF";

	if (num == 0)
	{
		_putchar('0');
		(*count)++;
		return (1);
	}

	while (num > 0)
	{
		buffer[i] = hex_digits[num % 16];
		num /= 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(buffer[i]);
		i--;
		(*count)++;
		count2++;
	}
	return (0);
}

/**
*print_nonch - printnonch
*@list: args list pointer
*@count: counter pointer
*Return: value
*/
int print_non_ch(va_list list, int *count)
{
	char *str = va_arg(list, char *);
	int i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		
		if ((str[i] > 0 && str[i] < 32) || str[i] < 127)
		{
			_putchar(str[i]);
			*count += 1;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			*count += 2;
			if (str[i] < 16)
			{
				_putchar('0');
				*count += 1;
			}
			put_hex_upper(str[i], count);
		}
	}
	return (0);
}
