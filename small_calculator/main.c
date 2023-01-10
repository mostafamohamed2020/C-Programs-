#include <stdio.h>

int main(void)
{
	printf("\t\t this code simulates a simple calculator\n\n");
	int num1,num2,sum,mul,div,square,sub;
	int operation;
	printf("enter the first num\n");
	scanf("%d",&num1);
	printf("enter the second num\n");
	scanf("%d",&num2);
	printf("choose an operation\n");
	scanf("%d",&operation);
	switch(operation)
	{
		case 1:
	
		sum=num1+num2;
		printf("the sum is %d",sum);
		break;
	
	case 2:
	
		div=num1*num2;
		printf("the multiply is %d",div);
		break;
		
		case 3:
		sub=num1-num2;
		printf("the subtract is\n");
		break;
		
		case 4:
		square=num1*num1;
		printf("the square of %d is %d\n",num1,square);
		break;
		
		default:
		printf("invalid selection\n");
		break;
	}
	
	
	for(;;)
	{
		
	}
	return 0;
}

