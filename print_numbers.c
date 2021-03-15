#include "holberton.h"

/**
 * print_i - prints an integer
 * @i: integer to print
 * Return: returns digits printed
 */
int print_i(va_list i)
{
	int arr[10];
	int a, b, c, sum, count;

	c = va_arg(i, int);
	count = 0;
	b = 1000000000;
	arr[0] = c / b;
	for (a = 1; a < 10; a++)
	{
		b /= 10;
		arr[a] = (c / b) % 10;
	}
	if (c < 0)
	{
		_putchar('-');
		count++;
		for (a = 0; a < 10; a++)
			arr[a] *= -1;
	}
	for (a = 0; sum = 0; a < 10; a++)
	{
		sum += arr[a];
		if (sum != 0 || a == 9)
		{
			_putchar('0' + arr[a]);
			count++;
		}
	}
	return (count);
}

/**
 *print_d - prints a decimal
 * @d: decimal number to print
 * Return: digits to be printed
 */
int print_d(va_list d)
{
	int arr[10];
	int a, b, c, sum, count;

	c = va_arg(d, int);
	count = 0;
	b = 1000000000;
	arr[0] = c / b;
	for (a = 1; a < 10; a++)
	{
		b /= 10;
		arr[a] = (c / b) % 10;
	}
	if (c < 0)
	{
		_putchar('-');
		count++;
		for (a = 0; a < 10; a++)
		{
			arr[a] *= -1;
		}
	}
	for (a = 0; sum = 0; a < 10; a++)
	{
		sum += arr[a];
		if (sum != 0 || a == 9)
		{
			_putchar('0' + arr[a]);
			count++;
		}
	}
	return (count);
}
