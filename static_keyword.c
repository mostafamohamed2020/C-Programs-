#include <stdio.h>

/* counter increased each time the func1 called */
void func1(void)
{
	static int counter ;
	printf("func1 calling\n");
	
	counter ++;
	printf("func1 called %d times \n",counter);
}

int main(void){
    
	func1();
	func1();
	func1();
	printf("padding data\n");
	printf("padding data\n");
	printf("padding data\n");
	printf("padding data\n");
	func1();
	
	return 0;
}