#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
int length;
unsigned int ui;

length = _printf("Let's try to printf a simple sentence.\n");
_printf("Length:[%d, %i]\n", length, length);
_printf("Unknown:[%r]\n");
length = _printf("Percent:[%%]\n");
_printf("String:[%s]\n", "I am a string !");


ui = (unsigned int)INT_MAX + 1024;
_printf("Unsigned:[%u]\n", ui);
printf("Unsigned:[%u]\n", ui);
_printf("Unsigned octal:[%o]\n", ui);
printf("Unsigned octal:[%o]\n", ui);
_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

return (0);
}
