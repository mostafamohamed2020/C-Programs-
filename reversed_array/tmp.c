#include <stdio.h>

int main(void)
{
	int arr1[5],arr2[5],i,j,num=4;
	for(i=0;i<5;i++)
	{
		printf("enter element number %d\n",i+1);
		scanf("%d",&arr1[i]);
		
	}
	for(j=0;j<5;j++)
	{
		arr2[j]=arr1[num];
		num--;
	}
	printf("the reversed array will be\n\n");
	for(i=0;i<5;i++)
	{
		
		printf("%d\t",arr2[i]);
		
		
		
	}
		

	
	return 0;
}