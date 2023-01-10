/***************************************************/
/* AUTHOR  : MUSTAFA MUHAMMED                      */
/* DATE    : 12 MAY 2020                           */
/* VERSION : V01                                   */
/***************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "math lib.h"


int main()
{
    int a=12,b=5,n,dec;
    printf("a + b = %d\n",sum(a,b));
    printf("a * b = %d\n",mul(a,b));
    printf("a / b = %d\n",div(a,b));
    printf("a - b = %d\n",sub(a,b));
    printf("a mod b = %d\n",mod(a,b));
    printf("the maximum is %d\n",max(a,b));
    printf("a ^ 2 = %d\n",power(a,2));
    printf("enter a decimal number to convert it into binary\n");
    scanf("%d",&dec);
    printf("the binary value is :");
    binary(dec);
    printf("\nthe factorial of %d is %d\n",b,factorial(b));
    printf("the square root of 25 is %d\n",square(25));
    for(;;){}



    return 0;
}
