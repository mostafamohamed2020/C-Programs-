#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("\t\tcasting float to integer\n\n");
	float fnum=0;
	int intnum=0;
	printf("enter a floating number\n");
	scanf("%f",&fnum);
	intnum=(int)fnum;
	printf("the integer value is %d\n",intnum);
	return 0;
}
