#include "main.h"
#include <stdlib.h>

/**
 * NegativeToPositive - converts negative integer
 * to positive and corrects the size of bytes
 * that should be allocated to the negative integer
 * and the - sign
 * @num: input
 * @i: input
 * @isNegative: input
 * Return: void.
 */

void NegativeToPositive(long int *num, int *i, int *isNegative)
{
	if ((*num) < 0)
	{
		(*num) = (*num) * -1;
		*i = 2;
		*isNegative = 1;
	}
}

/**
 * print_integer - prints an intger by
 * converting it to a string
 * @num: input
 * @count: input
 * Return: void.
 */

void print_integer(long int num, int *count)
{
	int i, j, isNegative = 0;
	long int copy, copy2;
	char *str;

	i = 1;
	NegativeToPositive(&num, &i, &isNegative);
	copy = num;
	copy2 = num;
	/*how many digits in a number */
	while (copy / 10 != 0)
	{
		i++;
		copy = copy / 10;
	}
	str = malloc((sizeof(char) * i) + 1);
	j = i;
	str[j] = '\0';
	j = i - 1;
	if (isNegative == 1)
	{
		while (j > 0)
		{
			str[j] = (char)(copy2 % 10 + '0');
			copy2 = copy2 / 10;
			j--;
		}
		str[j] = '-';
	}
	else if (isNegative == 0)
	{
		while (j >= 0)
		{
			str[j] = (char)(copy2 % 10 + '0');
			copy2 = copy2 / 10;
			j--;
		}
	}
	print_string(str, count);
	free(str);
}
