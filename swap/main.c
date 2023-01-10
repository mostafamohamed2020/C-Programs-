#include <stdio.h>

int main(void)
{
	printf("\t\t\tthis code swapping two numbers\n\n");
	int num1,num2,num3;
	printf("enter the two numbers\n");
	scanf("%d" ,&num1);
	printf("enter the second number\n");
	scanf("%d",&num2);
	num3=num1;
	num1=num2;
	num2=num3;
	printf("the new numbers are %d %d\n",num1,num2);
	for(;;)
	{
		
	}
	return 0;
}
