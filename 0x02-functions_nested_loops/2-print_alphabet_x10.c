#include "main.h"
/**
 *print_alphabet_x10- returns the alphabet ten times
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
