#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
* struct sp_char - sturct for the special character
*@ch: symbol of the speacial character
*@fun: pointer to fun to print the argurment
*/
typedef struct sp_char
{
	char ch;
	int (*fun)(va_list, int *);
} spChar;

/**
*struct signs - sturct for the special character
*@ch: symbol of the signs
*@fun: pointer to fun to print sign
*/
typedef struct signs
{
	char ch;
	void (*fun)(int, char, int, va_list, int *);
} sign;

int _strlen(char *str);
int _printf(const char *format, ...);

int spIndex(char ch, struct sp_char *pArr);

int signIndex(char ch, struct signs *p);

int _putchar(char sp_ch);

int _putstr(char *str, int length);

void _putInt(unsigned int num, int *count);

int print_str(va_list list, int *count);

int print_ch(va_list list, int *count);


int print_int(va_list list, int *count);

int print_bi(va_list list, int *count);

int print_rev_str(va_list list, int *count);

int print_unsigned(va_list list, int *count);

int print_octal(va_list list, int *count);

int print_lower_hex(va_list list, int *count);

int print_upper_hex(va_list list, int *count);

int print_non_ch(va_list list, int *count);

int print_rot13_str(va_list list, int *count);

int print_addr(va_list list, int *count);

void postive_sign(int flag, char ch, int j, va_list ap, int *count);

void space_sign(int flag, char ch, int j, va_list ap, int *count);

void window_sign(int flag, char ch, int j, va_list ap, int *count);


#endif
