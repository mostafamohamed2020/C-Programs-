#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("\t\t this code handles with characters\n\n");
	char character;
	
	printf("enter a character \n");
	scanf("%c",&character);

	printf("the ASCII code of %c is %d\n",character,character );
	printf("the next chracter of %c	is %c \n",character,character+1);
	for(;;)
	{
		
	}
	return 0;
}
