#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string to print
 *
 * Description: prints each character of the string
 * pointed to by str using _putchar, then prints '\n'.
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
