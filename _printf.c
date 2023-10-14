#include "main.h"

/**
 * _printf - custom printf function
 * @format: input
 * Return: num of chars printed
 */

int _printf(const char *format, ...)
{
	int i;
	int count;
	va_list list;

	i = 0;
	count = 0;
	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					print_char(va_arg(list, int), &count);
					break;
				case 's':
					print_string(va_arg(list, char*), &count);
					break;
				case '%':
					print_char('%', &count);
					break;
				case 'd':
				case 'i':
					print_integer(va_arg(list, int), &count);
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(list);
	return (count);
}
