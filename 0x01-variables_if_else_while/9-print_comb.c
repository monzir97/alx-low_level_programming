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
if (a < 9)
{
putchar(a + '0');
putchar(',');
}
else
{
putchar(a + '0');
}
putchar(' ');
a++;
}
return (0);
}