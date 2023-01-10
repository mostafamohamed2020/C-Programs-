/*this program reserves a given number
* author:mostafa gommaa
* created in june 2020*/

#include <stdio.h>

int main(void){
	int number ,n,j,count=0;
    printf("enter any number\n");
    scanf("%d\n",&number);
    printf("the reversed number is ");
//while(number>0)   //if you wanna loop with while
	for(j=0;number>0;j++)     
{
	n=number%10;   //isolate the last digit 
	printf("%d",n); //print the isolated number
	number=((number-n)/10); //update the new number for the next itration 
	count++;  //number of digits
}
	printf("\nnumber of digits =%d\n",count);
	return 0;
}