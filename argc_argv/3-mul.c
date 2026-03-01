#include <stdio.h>
#include <stdlib.h>

/**
 *main-prints the product of 2 arguments,and if there is an error shows argc != 3
 *@argc:contains the number of arguments
 *@argv:contains the arguments as strings
 *Return:Returns 1 on error, 0 on success
 */

int main(int argc, char *argv[])
{
int num, num1;

if (argc != 3)
{
printf("Error\n");
return (1);
}

num = atoi(argv[1]);
num1 = atoi(argv[2]);
printf("%d\n", num *num1);

return (0);
}
