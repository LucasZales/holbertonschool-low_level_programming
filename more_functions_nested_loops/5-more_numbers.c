#include "main.h"
#include <stdio.h>
/**
 * more_numbers - numbers from 0 to 14 using _putchar , on a new line
 *
 * Return: void
 */
void more_numbers(void)
{
int Num1 = 0;
while (Num1 < 10)
{
int Num2 = 0;
while (Num2 < 15)
{
if (Num2 > 9)
{
_putchar((Num2 / 10) + '0');
}
_putchar((Num2 % 10) + '0');
Num2++;
}
_putchar('\n');
Num1++;
}
}
