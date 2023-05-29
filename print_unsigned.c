#include "main.h"

/**
*print_unsigned - print unsigned
*@list: args list pointer
*@count: counter pointer
*Return: value
*/
int print_unsigned(va_list list, int *count)
{
unsigned int num = va_arg(list, unsigned int);
char buffer[32];
int i = 0;
int count2 = 0;


if (num != 0)
{
while (num > 0)
{
buffer[i] = (num % 10) + '0';
num /= 10;
i++;
}
i--;
while (i >= 0)
{
_putchar(buffer[i]);
i--;
count2++;
}
}
else
{
_putchar('0');
count2++;
}
*count += count2;
return (0);
}
