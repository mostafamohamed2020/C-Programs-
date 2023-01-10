#include <stdio.h>

int main(void)
{
	printf("\t\tthis code displays an absolute value \n\n");
	int number;
	printf("enter any number\n");
	scanf("%d",&number);
	if(number>0)
	{
		printf("the absolute value is %d\n ",number);		
	}
	else
	{
	printf("the absolute value is %d\n ",(number*-1));	
	}
	return 0;
}
