#include <stdio.h>

int main(void)
{
	printf("\t\t\tthis program displays a matrix\n\n");
	int arr[3][2], i,j,num=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter the element number %d\n",num);
			scanf("%d",&arr[i][j]);
			num++;
		}
	}
	printf("the printed matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	for(;;)
	{
		
	}
	return 0;
}
