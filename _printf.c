#include "main.h"
/**
*call_sp - check for signs
*@format: the str format
*@count: pointer to  counter
*@list:pointer to arguments
*@i: pointer to index
*@p: pointer to struct
*/
void call_sp(const char *format, int *i, struct sp_char *p,
int *count, va_list list)
{
	int j, k = 3;
	va_list ap;
	int index = *i;
	int flagg = 0;
	sign flag[] = {{'+', postive_sign}, {' ', space_sign}, {'#', window_sign},
		{'\0', NULL}};

	va_copy(ap, list);
	while (signIndex(format[index], flag) != -1)
	{
		for (k = 0; flag[k].ch != '\0'; k++)
		{
			if (format[index] == flag[k].ch)
			{
				if (format[index] == '#')
					flagg = 2;
				else if (format[index] == '+' && flagg < 2)
					flagg = 1;
				index++;
				break;
			}
		}
	}
	j = spIndex(format[index], p);
	if (j == -1)
	{
		_putchar('%');
		(*i)--;
		*count += 1;
		return;
	}
	else
	{
		if (flag[k].ch != '\0')
			flag[k].fun(flagg, flag[k].ch, j, ap, count);
		p[j].fun(list, count);
		*i = index;
	}	
}


/**
*_printf - printf
*@format: string format
*Return: value
*/
int _printf(const char *format, ...)
{
	va_list list;
	int i, count2 = 0;
	int *count = &count2;
	spChar type[] = {
		{'s', print_str}, {'c', print_ch}, {'d', print_int},
		{'i', print_int}, {'b', print_bi}, {'r', print_rev_str},
		{'u', print_unsigned}, {'o', print_octal}, {'S', print_non_ch},
		{'x', print_lower_hex}, {'X', print_upper_hex}, {'R', print_rot13_str},
		{'p', print_addr}, {'\0', NULL}};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			i++;
			call_sp(format, &i, type, count, list);
		}
		else if (format[i] != '%')
		{
			_putchar(format[i]);
			*count += 1;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			i++;
			_putchar(format[i]);
			*count += 1;
		}
	}
	va_end(list);
	return (count2);
}
