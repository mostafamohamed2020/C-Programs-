/* this program swap without third variable
 * author:mostafa gomaa
 * created in june 2020*/

#include <stdio.h>

int main(void){
	int num1,num2;
	printf("enter the first number\n");
	scanf("%d\n",&num1);
	printf("enter the second number\n");
	scanf("%d\n",&num2);
	
	num2=num1+num2;
	num1=num2-num1;
	num2=num2-num1;
	printf("the swapped numbers are\n");
	printf("%d\n%d",num1,num2);
	return 0;
}