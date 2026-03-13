#include "function_pointers.h"
/**
 * print_name - prints a name using a function
 * @name: pointer to the name to print
 * @f: pointer to the function that prints the name
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
