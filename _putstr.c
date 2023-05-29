#include "main.h"
/**
*_putstr - print str
*@str: pointer to printed string
*@length: length of the string
*Return: value
*/
int _putstr(char *str, int length)
{
	return (write(1, str, length));
}