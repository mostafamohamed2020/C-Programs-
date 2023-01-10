/*this code simulates the str_cpy function
/*author:mostafa gomaa
/*created in june 2020*/

#include <stdio.h>
char str_copy(char *source,char *destination) /*taking parameters*/

{
	
	while(*source!='\0')
	{
		*destination++ = *source++; /*coping the content*/
	}
	*destination='\0';             /*storing the nul terminator at the end*/
	return destination;
}
int main(void){
	char name1[50],name2[50];
	char *ptr1=name1;
	char *ptr2=name2;
	puts("enter the first name\n");
	scanf("%s\n",&name1);
	str_copy(ptr1,ptr2);         /*taking the parameters*/
	puts("the copied name is: ");
	puts(ptr2);                  /*display the copied content*/
	/*printf("%s\n",ptr2);  also valid to be used*/
	
	
	return 0;
}