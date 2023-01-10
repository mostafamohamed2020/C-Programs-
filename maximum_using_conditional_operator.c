/*determine the maximum number using ? operator
/*author:mostafa gomaa
/*created in june 2020*/

#include <stdio.h>

int main(void){
	int num1=5,num2=10,x;
	printf("enter two numbers\n");
	scanf("%d%d\n",&num1,&num2);
	x=(num1>num2)?num1:num2;
	printf("the maximum is :%d",x);
	return 0;
}