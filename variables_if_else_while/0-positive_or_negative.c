#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main-description.
 *Return:0
 */
int main(void)
{
int n;
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}

n++;
return (0);
}
