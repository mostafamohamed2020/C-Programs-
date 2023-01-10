/* this code copies two strings with arraies
/* author:mostafa gomaa
/* created in june 2020
/*/

#include <stdio.h> 
 
int main(void) { 
	char name1[20]="mostafa";  /*the first name*/
	char name2[20];            /*the empty string*/
	char *pn1=name1;           /*pointer points to the first name*/
	char *pn2=name2;           /*pointer points to the second name*/

	puts(pn1);          /*display the first name puts(name1) valid also*/
	
	while(*pn1!='\0')   /*utill not reaching the last character*/
	{
		*pn2++=*pn1++;  /*copy the content of name1 to name2*/
		
	}
    *pn2='\0';          /*storing '\0' to indicate the final last character in name2*/
    
	puts(name2);    /* display the copied content puts(pn2) isn't  valid*/
	return 0; 
	} 