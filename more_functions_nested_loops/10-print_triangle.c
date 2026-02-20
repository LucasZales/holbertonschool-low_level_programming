#include <stdio.h>
#include "main.h"
/**
 * print_triangle - prints a triangle of '#' characters followed by a new line
 * @size: size of the triangle
 *
 * If size is 0 or less, the function prints only a new line.
 *
 */
void print_triangle(int size)
{
int row, space, hash;
if (size <= 0)
{
_putchar('\n');
return;
}
for (row = 1; row <= size; row++)
{
for (space = 1; space <= size - row; space++)
_putchar(' ');
for (hash = 1; hash <= row; hash++)
_putchar('#');
_putchar('\n');
}
}
