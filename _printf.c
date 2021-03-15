#include "holberton.h"
#include <stdlib.h>

/**
 * specifiers_checker - checks if the specifier is in valid format
 * @form: possible format specifier
 * Return: returns pointer to the valid function or NULL
 */
static int(*specifiers_checker(const char *form))(va_list)
{
	unsigned int idx;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i}
		{NULL, NULL}
	};

	for (idx = 0; p[idx].t != NULL; idx++)
	{
		if (*(p[idx].t) == *form)
		{
			break;
		}
	}
	return (p[idx].f);
}

/**
 * _printf - It produces output according to format
 * @format: list all arguments passed to the function
 * Return: returns number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int idx, count = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[idx])
	{
		for (idx = 0; format[idx] != '%' && format[idx];  idx++)
		{
			_putchar(format[idx]);
			count++;
		}
		if (!format[idx])
			return (count);
		f = specifiers_checker(&format[idx + 1]);
		if (f != NULL)
		{
			count += f(valist);
			idx += 2;
			continue;
		}
		if (!format[idx + 1])
			return (-1);
		_putchar(format[idx]);
		count++;
		if (format[idx + 1] == '%')
			idx += 2;
		else
			idx++;
	}
	va_end(valist);
	return (count);
}
