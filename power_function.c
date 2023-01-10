/*power function
/*author:mostafa gomaa
/*created in june 2020*/

#include <stdio.h>
float power(float base,int power);  /*function initialization*/
int main(void){
	int pow;
	float base;
	printf("enter the base and the power respectively\n");
	scanf("%f%d\n",&base,&pow);
	printf("%f^%d = %f\n",base,pow,power(base,pow));  /*function calling*/
	for(;;){}
	return 0;
}
float power(float base,int power)  /*function decleration*/
{
	int i=1;
	float	c=base;
	while(i<power)
	{
		base*=c;
		i++;
	}
	return base;
}