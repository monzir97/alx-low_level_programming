#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - print the last digit
 *
 * Return : returns zero
*/
int main(void)
{
int n;
int lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (lastDigit > 5)
{
printf("is %d and is greater than 5\n", n);

}
else if (lastDigit == 0)
{
printf("is %d and is 0\n", n);
}
else
{
printf("is %d and is less than 6 and not 0\n", n);
}


return (0);



}
