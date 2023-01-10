/* this program display table of any number
* author:mostafa gomaa
* created in june 2020*/

#include <stdio.h>
int main(void){
	int number,j;
	printf("enter any number\n");
	scanf("%d\n",&number);
	for(j=1;j<=10;j++)
	{
		printf("%d*%d=%d\n",number,j,(number*j));
		
	}
	return 0;
}