#include <stdio.h>

int main(void)
{
	float leangth,base,farea;
	int intarea;
	printf("enter the base \n");
	scanf("%f",base);
	printf("enter the leangth\n ");
	scanf("%f",leangth);
	farea=0.5*base*leangth;
	intarea=(int)farea;
	printf("the Area is %d",intarea);
	
	return 0;
}
