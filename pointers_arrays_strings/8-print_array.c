#include <stdio.h>
#include "main.h"

/**
 *print_array-prints num of  elements of the array
 *@a:an array
 *@n:an integer
 */

void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
printf("%d", a[i]);
i++;
if (i != n)
{
printf(", ");
}
}
printf("\n");
}
