/*this code displays a factorial of number using functions
/*author:mostafa gomaa
/*created in june 2020*/

#include <stdio.h>
int factorial(int num);  /*function intialization*/
int main(void){
	int num;
	printf("enter the number\n");
	scanf("%d\n",&num);
	printf("the factorial of %d is:%d\n",num,factorial(num));  /*function calling*/
	for(;;){}
	return 0;
}
int factorial(int num)  /*function decleration*/
{
	int i,fact=1;
	for(i=1;i<=num;i++)
	{
		fact*=i;
	}
	return fact;
	
	
}