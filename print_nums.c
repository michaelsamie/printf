#include "main.h"

/**
 * * print_int - prints an integer
 * * @l: va_list of arguments from _printf
 * * @f: pointer to the struct flags determining
 * * Return: number of char printed
 */
int print_int(va_list l, flags_t *f)
{
	int num = va_arg(l, int);
	int res = count_digit(n);

	if (f->space == 1 && f->plus == 0 && num >= 0)
		res += _putchar(' ');
	if (f->plus == 1 && num >= 0)
		res += _putchar('+');
	if (num <= 0)
		res++;
	print_number(num);
	return (res);
}

/**
 * * print_unsigned - prints an unsigned int
 * * @l: va_list of arguments 
 * * @f: pointer to the struct flags determining
 * * Return: number of char printed
 */
int print_unsigned(va_list l, flags_t *f)
{
	unsigned int v = va_arg(l, unsigned int);
	char *str = convert(v, 10, 0);

	(void)f;
	return (_puts(str));
}

/**
 * * print_number - helper function that loops through
 * * an integer and prints all its digits
 * * @num: integer
 */
void print_number(int num)
{
	unsigned int n1;

	if (num < 0)
	{
		_putchar('-');
		n1 = -num;
	}
	else
		n1 = num;

	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * * count_digit - returns the number of digits in an integer
 * * for _printf
 * * @i: integer to evaluate
 * * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int t = 0;
	unsigned int v;

	if (i < 0)
		v = i * -1;
	else
		v = i;
	while (v != 0)
	{
		v /= 10;
		t++;
	}
	return (t);
}
