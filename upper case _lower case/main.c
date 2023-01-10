#include <stdio.h>

int main(void)
{
	printf("\t\tthis code differentiates between lowercase and uppercase characters\n\n");
	char character;
	int ASCII;
	printf("enter any character\n");
	scanf("%c",&character);
	ASCII=(int)character;
	if(ASCII>=65&&ASCII<=90)
	{
		printf("the entered character is uppercase\n");
		printf("its ASCII code is %d\n",ASCII);
	}
	if(ASCII>=97&&ASCII<=122)
	{
		printf("the entered character is lower case\n");
		printf("its ASCII code is %d\n",ASCII);
	}
	for(;;)
	{
		
	}
	return 0;
}
