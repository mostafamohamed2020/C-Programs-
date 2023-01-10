#include <stdio.h>

int main(void)
{
	printf("\t\t this code reverses three digits integer\n\n");
	int number,remender1=0,i;
	printf("enter any integer\n");
	scanf("%d",&number);
	printf("the reversed number is ");
	for(i=0;i<3;i++)
	{
	remender1=number%10;
	printf("%d",remender1);
	number=number-(remender1);
	number/=10;	
	}
for(;;)
	{
		
	}
	
	return 0;
}
