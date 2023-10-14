#include "main.h"

/**
 * print_number - prints any positive number
 * @num: input
 * @count: num of chars printed
 */

void print_number(int num, int *count)
{
	if (num / 10)
	{
		print_number(num / 10, count);
	}
	_putchar((num % 10) + '0');
	(*count)++;
}

/**
 * print_integer - prints an integer
 * @number: input
 * @count: num of chars printed
 * Return: void
 */

void print_integer(int number, int *count)
{
	if (number < 0)
	{
		_putchar('-');
		number = -number;
		(*count)++;
	}
	print_number(number, count);
}
