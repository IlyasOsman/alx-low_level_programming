#include "main.h"

/**
*  reverse_array - function that reverse content of array
*  @a: array
*  @n: number of elements
*/

void reverse_array(int *a, int n)
{
int new, i;
for (i = n - 1; i > n / 2; i--)
{
new = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = new;
}
}
