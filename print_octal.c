#include "main.h"

/**
*print_octal - print octal
*@list: args list pointer
*@count: counter pointer
*Return: value
*/
int print_octal(va_list list, int *count)
{
unsigned int num = va_arg(list, unsigned int);
char buffer[32];
int i = 0;

if (num == 0)
{
_putchar('0');
(*count)++;
return (1);
}

while (num > 0)
{
buffer[i] = (num % 8) + '0';
num /= 8;
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
