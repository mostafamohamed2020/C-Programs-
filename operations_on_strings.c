/*this program counts vowls,constants and spaces in a given statement
/*author:mostafa gomaa
/*created in june 2020*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(void){
	char s[20];
	int i,vowls=0,constant=0,spaces=0,l,punct=0;
	printf("enter the statement\n");
	scanf("%s\n",&s);
	l=strlen(s);
	
	for(i=0;i<l;i++)   /*number of vowls*/
	{
		if(s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='e')
		{
			vowls++;
		}
		else	  /*number of constants*/
		constant++;
		
		if(isspace(s[i]))   /*number of spaces*/
		{
			spaces++;
		}
		if(ispunct(s[i]))  /*number of signs*/
		{
			punct++;
		}	
	}
	printf("number of words :%d\n",(spaces+1));
	printf("number of vowls  :%d\n",vowls);
	printf("number of constants  :%d\n",constant);
	printf("number of spaces  :%d\n",spaces);
	printf("number of strange signs  :%d\n",punct);
	for(;;){}
	return 0;
}