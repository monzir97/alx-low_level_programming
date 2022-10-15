#include<stdio.h>
/**
 * main- printting the numbers from one to nine
 *
 * Return: return zero
 */
int main(void)
{
int a = 0;

while (a <= 9)
{
putchar(a + '0');
putchar(',');
putchar(' ');

a++;
}
return (0);
}
