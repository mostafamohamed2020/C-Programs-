#include <stdio.h>

int main(void)
{
	int classes=0,attends=0;
	int precentage=0;
	printf("enter the number of complete classes\n");
	scanf("%d",&classes);
	printf("enter the number of attended classes\n");
	scanf("%d",&attends);
	precentage=(attends*100/classes);
	printf("the precentage of attended classes is %d  \n",precentage);
	if(precentage>=75)
	{
		printf("you are allowed to attend the exam\n");
	}
	else
	{
		printf("you are not allowed to attend the exam\n");
	}
	
	return 0;
}
