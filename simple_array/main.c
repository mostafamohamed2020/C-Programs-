#include <stdio.h>

int main(void)
{
printf("\t\t\tsimple code with arraies\n\n");
	int arr[10],i,j,n,positive=0,negative=0,zeros=0,odd=0,even=0;
	for(i=0;i<10;i++)
	{
		printf("enter element number %d \n",i+1);
		scanf("%d",&arr[i]);
		if(arr[i]%2==0&&arr[i]!=0)
		{
			even++;
		
		}
		if(arr[i]%2!=0&&arr[i]!=0)
		{
			odd++;
		
		}
		if(arr[i]==0)
		{
			zeros++;
		
		}
		if(arr[i]>0)
		{
			positive++;
		
		}
		if(arr[i]<0)
		{
			negative++;
		
		}
	}

	
	printf("number of odd numbers %d\n",odd);
	printf("number of even numbers %d\n",even);
	printf("number of positive numbers %d\n",positive);
	printf("number of negative numbers %d\n",negative);
	printf("number of zeros numbers %d\n",zeros);
	
	for(;;)
	{
		
	}

	return 0;
}
