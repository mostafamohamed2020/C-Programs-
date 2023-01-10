#include <stdio.h>

int main(void)
{
	printf("\t\t\tthis code splitting an array\n\n");
	int arr1[10],arr2[5],arr3[5],i,j,k,num1=0,num2=5;
	for(i=0;i<10;i++)
	{
		printf("enter element number %d\n",i+1);
		scanf("%d",&arr1[i]);
	}
	for(j=0;j<5;j++)
	{
		arr2[j]=arr1[num1];
		num1++;
	}
		printf("the first array is \n");
	for(j=0;j<5;j++)
	{
		printf(" %d\t",arr2[j]);
		
	}
	printf("\n");
	for(k=0;k<5;k++)
	{
		arr3[k]=arr1[num2];
		num2++;
	}
	printf("the second array is \n");
	for(k=0;k<5;k++)
	{
		printf("%d\t",arr3[k]);
	}
	for(;;)
	{
		
	}
	return 0;
}
