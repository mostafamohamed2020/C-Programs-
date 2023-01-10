/*this code arranges the content of characters' array
 *author:mostafa gomaa
 *created in june 2020
*/

#include <stdio.h>

int main(void){
	char character[5];  //declaring the array
	int i,j,k,n;
	char t;
	for(i=0;i<5;i++)   //for loop to get the array elements
	{
		printf("enter the element number%d\n",i+1);
		scanf("%c\n",&character[i]);
	
	}	
	
	for(j=0;j<5;j++)  
	{
		for(k=j+1;k<5;k++)  //loop to compare each value with the rest of array
		{
			if(character[k]<character[j])
			{
				t=character[j];
				character[j]=character[k];
				character[k]=t;
				
			}
		}
	}
	printf("the arranged array:\n");
	for(n=0;n<5;n++)      //for loop to display the arranged values
	{
		printf("%c\n",character[n]);
		
	}
	
	
	return 0;
}