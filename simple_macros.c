#include <stdio.h>
#define MUL(x,y) ((x)*(y))  //mul macro
#define ADD(x,y) ((x)+(y))  //add macro
#define MAX(x,y) (x)>(y)? (x): (y)  //maximum macro


int main(void){
	int a,b;
	printf("press the two numbers\n");
	scanf("%d%d\n",&a,&b);
	printf("the mul of %d and %d  = %d\n",a,b,MUL(a,b));
	printf("the max of %d and %d  = %d\n",a,b,MAX(a,b));
	printf("the sum of %d and %d  = %d\n",a,b,ADD(a,b));
	
	
	return 0;
}