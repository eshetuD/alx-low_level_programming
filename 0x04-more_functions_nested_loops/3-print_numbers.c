#include "main.h"
/**
 * print_numbers - print the numbers fro 0 to 9
 * Return: always 0
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');

	return (0);
}
