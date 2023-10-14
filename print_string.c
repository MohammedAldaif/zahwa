#include "main.h"

/**
 * print_string - prints a string to stdout
 * @str: string to be printed
 * @count: a counter for num of chars printed
 * Return: void
 */

void print_string(char *str, int *count)
{
	if (str == NULL)
		str = "";
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		(*count)++;
	}
}
