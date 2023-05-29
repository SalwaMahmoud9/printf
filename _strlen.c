#include "main.h"
/**
* _strlen - get string length
* @str: string
* Return: length
*/
int _strlen(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}