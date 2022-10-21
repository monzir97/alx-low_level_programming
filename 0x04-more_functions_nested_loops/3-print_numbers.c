#include "main.h"
/**
 * print_numbers- print the number from zero to nine
 * Return: return void.
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + '0');

	_putchar('\n');
}
