#include "main.h"
/**
*postive_sign - print the + flag
*@ap: copy argument list
*@flag: flag
*@j: index of argument
*@count: count of string
*@ch: character
*/
void postive_sign(int flag, char ch, int j, va_list ap, int *count)
{
	if (flag < 2 || (j == 2 || j == 3 || j == 12))
	{
		if (ch == '+' && (j == 2 || j == 3 || j == 12))
		{
			if (va_arg(ap, int) >= 0 || j == 12)
			{
				_putchar('+');
				*count += 1;
			}
		}
	}
	else
	{
		window_sign(flag, '#', j, ap, count);
	}
}
/**
*space_sign - fun to print the space flag
*@flag: flag to can overwide the flags
*@ch: the + char
*@j: the index of the argument
*@ap: the copy of the argument list
*@count: the count of the str
*/
void space_sign(int flag, char ch, int j, va_list ap, int *count)
{
	if ((ch == ' ' && (j == 2 || j == 3 || j == 12)) && flag == 0)
	{
		if (va_arg(ap, int) >= 0 || j == 12)
		{
			_putchar(' ');
			*count += 1;
		}
	}
	else if (flag == 2 && !(j == 2 || j == 3 || j == 12))
	{
		window_sign(flag, '#', j, ap, count);
	}
	else if (flag <= 2 && (j == 2 || j == 3 || j == 12))
	{
		_putchar('+');
		*count += 1;
	}
}
/**
*window_sign - fun to print the windoflag
*@flag: flag to can overwide the flags
*@ap: the copy of the argument list
*@ch: the + char
*@j: the index of the argument
*@count: the count of the str
*/
void window_sign(int flag, char ch, int j, va_list ap, int *count)
{
	if (va_arg(ap, int) != 0)
	{
		if (flag < 2 && (j == 2 || j == 3 || j == 12))
		{
			_putchar('+');
			*count += 1;
		}
		else if (flag > 1 && !(j == 2 || j == 3 || j == 12))
		{
			if (ch == '#' && j == 10)
			{
				_putchar('0');
				_putchar('X');
				*count += 2;
			}
			else if (ch == '#' && j == 7)
			{
				_putchar('0');
				*count += 1;
			}
			else if (ch == '#' && j == 9)
			{
				_putchar('0');
				_putchar('x');
				*count += 2;
			}
		}
	}
}
