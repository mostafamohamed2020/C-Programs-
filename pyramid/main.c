#include <stdio.h>

int main(void)
{
	printf("\t\tthis code displays apyramid shape\n\n");
	int row,colomn,i,z;
	printf("enter the number of rows\n");
	scanf("%d",&row);
	/*printf("enter the number of colomns\n");
	scanf("%d",&colomn)*/
	for( i=0;i<=row;i++)
	{
		for( z=0;z<i;z++)
		{
				printf("#\t");
		}
	printf("\n");
	
	}
	for(;;)
	{
		
	}
	return 0;
}
