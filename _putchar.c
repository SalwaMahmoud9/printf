#include "main.h"
/**
*_putchar - prints a character
*@sp_ch: character to print
*Return: value
*/
int _putchar(char sp_ch)
{
	return (write(1, &sp_ch, 1));
}