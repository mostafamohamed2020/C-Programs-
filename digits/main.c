#include <stdio.h>

int main(void)
{
	printf("\t\t this code counting the digits of digits with summtion\n\n");
	
	int number,digits=0,remender,sum=0,sume=0,even=0,odd=0,sumo=0;
	printf("enter any integer number\n");
	scanf("%d",&number);
	while(number>0)
	{
	
		remender=number%10;
		if(remender%2==0)
		{
			even++;	
			sume+=remender;
		
		}
		if(remender%2!=0)
		{
			odd++;
			sumo+=remender;
			
		}
		digits++;
		sum+=remender;
		number=number/10;
	}
	printf("this integer consists of %d digits\n",digits);
	printf("the sum of digits is %d\n",sum);
	printf("there is %d even digits\n",even);
	printf("there is %d odd digits\n",odd);
	printf("sum of even digits = %d\n",sume);
	printf("sum of odd digits = %d\n",sumo);
	for(;;)
	{
		
	}
	return 0;
}
