#include "function_pointers.h"
/**
 * print_name - to print name of passed argument
 * @name : character argument
 * @f: function pointer to void function
 * Return : nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
