#include "main.h"
/**
 *_isalpha- pritn all letters
 *@c: the letter
 *Return: it return 1 or zero
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
