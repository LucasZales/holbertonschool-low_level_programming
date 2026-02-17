#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - numbers from 0 to 9 skipping 2 and 4, on a new line
 *
 * Return: void
 */

void print_most_numbers(void)
{
char Num;
for (Num = '0' ; Num <= '9' ; Num++)
{
if (Num == '2' || Num == '4')
{
}
else
{
_putchar(Num);
}
}
_putchar('\n');
}
