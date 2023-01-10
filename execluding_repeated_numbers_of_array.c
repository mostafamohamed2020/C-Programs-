/*this code exclude repeated numbers in array
/*author:mostafa gomaa
/*created in june 2020*/

#include <stdio.h>

int main(void){
	int arr[5];
	int temp,j,i;
	for(i=0;i<5;i++)    /*taking array's elements*/
	{
		printf("enter the element number %d\n",i+1);
		scanf("%d\n",&arr[i]);
	}
	for(i=0;i<5;i++)     /*arranging the elements*/
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[j]<arr[i])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		}
	}
	for(i=0;i<5;i++)    /*execluding repeated elements*/
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[j]==arr[i])
		{
			arr[j]='\0';
		}
		}
	}
	printf("the arranged unrepeated array is\n");
	for(i=0;i<5;i++) /*displaying the arranged unrepeated array*/
	{
		if(arr[i]==0)
		continue;
		printf("%d\n",arr[i]);
	}	
	
	
	return 0;
}