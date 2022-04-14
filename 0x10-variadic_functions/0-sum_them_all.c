#include "variadic_function.h"
#include <stdarg.h>
/**
 * sum_them_all - to get sum of values
 * @n : the first argument
 * 
 * Return : int or 0 if an error occured
 */


int sum_them_all(const unsigned int n, ...)
{
    unsigned int value, sum=0;
    if(n == 0)
     return 0;
    else {
        va_list args;
        va_start(args,n);
        for(int i=0; i<n;i++){
            value=va_arg(args,unsigned int);
            sum=sum+value;
        }
        va_end(args);
        return sum;
    }
}
