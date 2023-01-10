#include <stdio.h>

int main(void)
{
	printf("\t\t\t this code for sorting array\n\n");
	int arr[5],min,num=0,i,j,k,l,t;
	for(i=0;i<5;i++)
	{
		printf("enter element number %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	for(j=0;j<4;j++)
	{
		for(l=j+1;l<5;l++)
		{
			if(arr[l]<arr[j])
			{
				t=arr[j];
				arr[j]=arr[l];
				arr[l]=t;
			}
		}
	}
	
	printf("the sorted array is \n",i+1);
	for(k=0;k<5;k++)
	{
		
		printf("%d\t",arr[k]);
	}
	
	for(;;)
	{
	}
	
	return 0;
}
