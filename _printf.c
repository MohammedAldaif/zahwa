#include "main.h"

/**
 * _printf - custom printf fucntion
 * @format: input
 * Return: num of chars printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	int count;

	count = 0;
	va_start(list, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
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
				default:
					print_string("Error: unsupported specifier!\n", &count);
					break;
			}
			format++;
		}
		else
		{
			_putchar(*format);
			format++;
			count++;
		}
	}
	va_end(list);
	printf("number of char printed: %d\n", count);
	return (count);
}
