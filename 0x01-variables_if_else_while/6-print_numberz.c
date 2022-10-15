#include<stdio.h>
/**
 * main - print number from zero to nine
 *
 * Return: return zero
 */
int main(void)
{
int a = 0;

while (a < 10)
{
putchar(a + '0');
a++;
}
putchar('\n');
return (0);

}
