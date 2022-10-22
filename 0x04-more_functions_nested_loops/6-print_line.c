#include "main.h"
/*
 *print_line- draw striaght line in terminal
 *Return: it returns zero
 */
void print_line(int n)
{
int length;

if (n > 0)
{
for (len = 0; len < n; len++)
_putchar('_');
}

_putchar('\n');
}
