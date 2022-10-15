#include<stdio.h>
/**
 * main- print letter in reverse order
 *
 * Return: return zero
 */
int main(void)
{
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
