#include "main.h"
/**
 *swap_int-swapping two integers
 *@a: the first interger
 *@b:The second interger
 */
void swap_int(int *a, int *b)
{
int swap = *a;
*a = *b;
*b = swap;
}
