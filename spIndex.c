#include "main.h"

/**
*spIndex - spIndex
*@ch: character 
*@pArr: Array pointer
*Return: value
*/
int spIndex(char ch, struct sp_char *pArr)
{
	int i;

	for (i = 0; (pArr + i)->ch != '\0'; i++)
	{
		if (ch == (pArr + i)->ch)
			return (i);
	}
	return (-1);
}

/**
*signIndex - signIndex
*@ch: character
*@pArr: array pointer
*Return: value
*/
int signIndex(char ch, struct signs *pArr)
{
	int i;

	for (i = 0; (pArr + i)->ch != '\0'; i++)
	{
		if (ch == (pArr + i)->ch)
			return (i);
	}
	return (-1);
}
