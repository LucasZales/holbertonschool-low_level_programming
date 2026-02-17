#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints the numbers 0 to 9, followed by a new line
 *
 * Return: void
 */

void print_numbers(void)
{
char Num = '0';
while (Num <= '9')
{
_putchar (Num);
Num++;
}
_putchar('\n');
}
