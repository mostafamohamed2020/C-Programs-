/*this code displays product matrix
/*author:mostafa gomaa
/*created in june 2020*/

#include <stdio.h>

int main(void){
	int j,k;
	for(j=1;j<=10;j++)
	{
		for(k=1;k<=10;k++)
		{
			printf("%d\t",j*k);
		}
		printf("\n");
		
	}
	
	return 0;
}