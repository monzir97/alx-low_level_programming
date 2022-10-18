#include<stdio.h>

/**
 * print_alphabet- try to make funciton to print the alphabe
 *
 * Return: It return zeo
 */
void print_alphabet(void);
/**
 * main- print the function
 *
 * Return: it retuns nothign
 *
 */
int main(void)
{
print_alphabet();
return (0);





}
void print_alphabet(void)
{
char i = 'a';
while (i <= 'z')
{
putchar(i);
putchar('\n');
i++;
}

}
