/* this code used to arrange names according to the alphapitical order
 * author:mostafa gomaa
 * created in june 2020
 */
#include <stdio.h>
#include <string.h>

int main(void){
	char name[5][10];
	char temp[10];
	int l,j,k,n;
	
	for(l=0;l<5;l++)
	{
		printf("enter name number%d\n",l+1);
		scanf("%s\n",name[l]);
	}
	
	for(k=0;k<5;k++)
	{
		for(n=k+1;n<5;n++)
		{
			if(name[k][0]>name[n][0])
			{
				strcpy(temp,name[k]);
				strcpy(name[k],name[n]);
				strcpy(name[n],temp);
			}
		}
	}
	printf("the sorted names are:\n");
	for(j=0;j<5;j++)
	{
		printf("%s\n",name[j]);
	}
	for(;;)
	{}
	return 0;
}