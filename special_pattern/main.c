#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("\t\t\t this code simulates a sand clock\n\n");
	int base;       //the top value
	printf("enter the number of base\n");
	scanf("%d",&base);
	for(int i=base;i>=1;i--)
	{
		for(int z=0;z<i;z++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	for(int t=2;t<=base;t++)
	{
	for(int r=0;r<t;r++)
	{
		printf("*\t");
	}
	
	printf("\n");
	}
	for(;;)
	{
	
	}
	return 0;
}
