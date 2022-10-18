#include "main.h"

/**
 * print_c - A function that prints a char
 * @c: character to print
 * Return: Always 1 (Success)
 */
int print_c(va_list c)
{
return (write(1, &c, 1));
}
