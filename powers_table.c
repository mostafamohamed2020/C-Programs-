/*this code displays a table of powers of a taken number
/*author:mostafa gomaa
/*created in june 2020*/

#include <stdio.h>
typedef long int uint;
int main(void){
	int num,i,j;
	uint z=1;
	printf("enter any number\n");
	scanf("%d\n",&num);
	printf("\t\t***POWER TABLE***\n\n");
	printf("NUMBER\tPOWER\tRESULT\n");
	
	for(i=0;i<=10;i++)
	{
		for(j=0;j<i;j++)
		{
			z*=num;
		}
		printf("%d\t%d\t%d\n",num,i,z);
		z=1;
	}
	
	return 0;
}