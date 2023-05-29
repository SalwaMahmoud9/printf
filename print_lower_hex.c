#include "main.h"

/**
 * print_lower_hex - print_lowerhex
 *@list: args list pointer
 *@count: counter pointer
 *Return: value
 */
int print_lower_hex(va_list list, int *count)
{
unsigned int num = va_arg(list, unsigned int);
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
