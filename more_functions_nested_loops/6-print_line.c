#include "main.h"
#include <stdio.h>
/**
 * print_line -draw a straight line using _putchar , on a new line
 *
 * @n: the number of times to print the underscore character
 *
 * Return: void
 */
void print_line(int n)
{
int i;
for (i = 0; i < n ; i++)
{
_putchar('_');
}
_putchar('\n');
}
