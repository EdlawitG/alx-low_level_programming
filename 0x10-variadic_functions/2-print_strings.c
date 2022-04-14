#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints all strings with a separator
 * @separator: separe strings
 * @n: int, number of undefined arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    char *value, sum=0;
    if(separator == NULL){
        
    }
    else {
        va_list args;
        va_start(args,n);
		for(int i=0; i<n;i++){
			value=va_arg(args,char*);
			printf("%s",value);
			if(i != n-1)
			printf("%s",separator);
			}
        va_end(args);
        putchar('\n');
    }
}
