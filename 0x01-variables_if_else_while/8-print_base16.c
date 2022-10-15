#include<stdio.h>
/**
 * main- print all the hexidecimal numbers
 *
 * Return:return zero
 */
int main(void)
{
int a = 0;
char c = 'a';
while (a < 10)
{
putchar(a + '0');
a++;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);


}
