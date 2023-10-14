#include "main.h"

/**
 * print_char - prints a char to stdout
 * @ch: char to be printed
 * @count: a counter for num of chars printed
 * Return: void
 */

void print_char(char ch, int *count)
{
	_putchar(ch);
	(*count)++;
}
