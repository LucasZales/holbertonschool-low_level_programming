#include <stdio.h>
/**
 *main-description.
 *Return:0
 */
int main(void)
{
char a = 'a';
char A = 'A';
while (a <= 'z' && A <= 'Z')
{
putchar (a);
putchar (A);
a++;
A++;
}
putchar ('\n');
return (0);
}
