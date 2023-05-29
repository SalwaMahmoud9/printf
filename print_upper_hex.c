#include "main.h"

/**
*print_upperhex - print upperhex
*@list: args list pointer
*@count: counter pointer
*Return: value
*/
int print_upper_hex(va_list list, int *count)
{
unsigned int num = va_arg(list, unsigned int);
char buffer[32];
int i;
int count2 = 0;
char hex_digits[] = "0123456789ABCDEF";
i = 0;
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
