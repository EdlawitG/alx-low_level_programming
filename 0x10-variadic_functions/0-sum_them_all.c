#include "variadic_function.h"
#include <stdarg.h>
/**
 * sum_them_all - to get sum of values
 * @n : the first argument
 * @... : number of other argument
 * Return : int
 */


int sum_them_all(const unsigned int n, ...)
{
    int value, sum=0;
    if(n == 0)
     return 0;
    else {
        va_list args;
        va_start(args,n);
        for(int i=0; i<n;i++){
            value=va_arg(args,int);
            sum=sum+value;
        }
        return sum;
    }
}
