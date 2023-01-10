/*call by refrence
/*author:mostafa gomaa
/*created in june 2020*/

#include <stdio.h>
int max(int *ptr1,int *ptr2); /*function initialization*/
int main(void){
	int *ptr1,*ptr2;
	printf("enter the numbers\n");
	scanf("%d%d\n",&ptr1,&ptr2);
	printf("the maximum number is:%d\n",max(&ptr1,&ptr2)); /*function calling*/
	
	return 0;
}
int max(int *ptr1,int *ptr2)  /*function decleration*/
{ 
	int max=*ptr1;
	if(*ptr2>max)
	{
		max=*ptr2;
		return max;	
	}
}