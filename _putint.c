#include "main.h"
/**
*_putInt - print an integer
*@number: integer to print
*@count:pointer to number of integer printed
*/
void _putInt(unsigned int number, int *count)
{
	if ((int)number < 0)
	{
		_putchar('-');
		*count += 1;
		number *= -1;
	}
	if (number / 10)
	{
		_putInt(number / 10, count); 
	}
	_putchar(number % 10 + '0');
	*count += 1;
}