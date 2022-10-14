#include<stdio.h>
/**
 * main- prints all alphpet except e,q
 *
 * Return: it returns nothing
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
c++;
}

putchar('\n');
return (0);
}
