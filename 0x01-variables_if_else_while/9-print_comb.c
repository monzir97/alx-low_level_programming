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
if (a <= 8)
{
putchar(a + '0');
putchar(',');
putchar(' ');
}
else
{
putchar(a + '0');
}

a++;
}
return (0);
}
