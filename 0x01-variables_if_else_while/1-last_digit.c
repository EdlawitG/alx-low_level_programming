#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*more header gose there*/

 /* betty style doc for function gose there*/
int main(void)
{
int n, digit;
srand(time(0));
n = rand() - RAND_MAX / 2;		
digit = n % 10;
if(digit > 5)
{
printf("Last digit of %d is %d and greater than 5\n", n, digit);
}
else if(digit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, digit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
}
return (0);
}
