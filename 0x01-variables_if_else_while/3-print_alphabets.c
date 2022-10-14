#include<stdio.h>
/**
 * main - print all lower and upper letter
 *
 * Return: it return nothing
 */
int main(void)
{
char c = 'a';
char a = 'A';

while (c <= 'z')
{
putchar(c);
c++;
}
while (a <= 'Z')
{
putchar(a);
a++;
}
putchar('\n');
return (0);

}
