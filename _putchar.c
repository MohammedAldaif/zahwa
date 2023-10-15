#include "main.h"

/**
 * _putchar - prints a single char to stdout
 * @ch: char to be printed
 * Return: int
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
