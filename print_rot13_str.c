#include "main.h"
/**
*print_rot13 - print string
*@list:  list of arguments
*@count: counter pointer
*Return: value
*/
int print_rot13_str(va_list list, int *count)
{
	char *str = va_arg(list, char *);
	int i, j;
	char a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z'};
	char b[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		'J', 'K', 'L', 'M'};

	if (str == NULL)
	{
		str = "(null)";
		_putstr(str, _strlen(str));
		*count += _strlen(str);
		return (-1);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; (a[j] != '\0' && str[i] != a[j]);)
		{
			j++;
		}

		if (str[i] == a[j])
		{
			_putchar(b[j]);
			*count += 1;
		}
		else
		{
			_putchar(str[i]);
			*count += 1;
		}
	}

	return (0);
}
