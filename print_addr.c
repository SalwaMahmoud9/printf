#include "main.h"

/**
 * print_hex - Prints hexadecimal of long integer
 * @num: number to covert
 * @count: Pointer to counter
 * Return: value
 */
int print_hex(unsigned long int num, int *count)
{
	char buffer[32];
	int i;

	i = 0;
	if (num == 0)
	{
		_putchar('0');
		(*count)++;
		return (1);
	}

	while (num > 0)
	{
		buffer[i] = (num % 16) + (num % 16 > 9 ? 'a' - 10 : '0');
		num /= 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(buffer[i]);
		i--;
		(*count)++;
	}
	return (0);
}

/**
 * print_addr - print the addresse
 * @count: Pointer to counter
 * @list: Points to the list of arguments
 * Return: value
 */
int print_addr(va_list list, int *count)
{
	char *str = "(nil)";
	void *addr = va_arg(list, void *);
	long int num;

	if (addr == NULL)
	{
		_putstr(str, _strlen(str));
		*count += _strlen(str);
		return (1);
	}

	_putchar('0');
	_putchar('x');
	*count += 2;
	num = (unsigned long int)addr;
	print_hex(num, count);
	return (0);
}
