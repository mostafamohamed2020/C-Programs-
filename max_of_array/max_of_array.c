#include <stdio.h>

int main(void)
{
	printf("\t\t\t the maximum of array\n\n");
	int arr[5];
	int i,max=0,min=0;
	
	for(i=0;i<5;i++)
	{
		printf("enter element number %d\n",i+1);
		scanf("%d",&arr[i]);
		
	}
	max=arr[1];
	for(i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	min=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("the maximum of array is %d\n",max);
	printf("the minimum of array is %d\n",min);
	for(;;)
	{
	
	}
	return 0;
}
