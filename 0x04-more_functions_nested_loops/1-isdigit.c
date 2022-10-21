#include "main.h"
/**
 * _isdigit- to determine whether it number or character
 * @c: it is the character to be cheked
 * Return:1 if it's number 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}

}
