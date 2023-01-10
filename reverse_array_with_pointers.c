/*this code reverses array of integers with pointers
/*author:mostafa gomaa
/*created in june 2020*/

#include <stdio.h>
void copy_int(int arr1,int arr2,int items)
{
	int	j,num=items-1;
	int *ptr1=arr1;
	int *ptr2=arr2;
	for(j=0;j<items;j++)
	{
		*ptr1++ = *ptr2+num;
		num--;
	}
	
}
int main(void){
	int	j;
	int arr1[5]={1,2,3,4,5};
	int arr2[5];
	copy_int(arr2,arr1,5);
	for(j=0;j<5;j++)
	{
		printf("%d\n",arr2[j]);
		
	}
	return 0;
}