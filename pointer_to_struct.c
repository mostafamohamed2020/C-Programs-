/*this code illustrates a pointer to structure
/*author:mostafa gomaa
/*created in june 2020*/

#include <stdio.h>
#include <string.h>   /*for strcpy*/

void show_name(struct tag*ptr);  /*function prototype*/

struct tag {              /*root structure*/
	char firstname[20];   /*struct members*/
	char lastname[20];
	int age;
	};

int main(void){
	struct tag tag1;    /*creating object*/
	struct tag *ptr1;
	ptr1=&tag1;               /*pointer to struct*/
	strcpy(tag1.firstname,"mostafa");
	strcpy(tag1.lastname,"soliman");
	ptr1->age=22;
	//tag1.age=22;    /*equal to ptr->age*/
	show_name(ptr1);    /*function calling*/
	
	return 0;
	for(;;)
	{}
}
void show_name(struct tag*ptr)   /*function decleration*/
{
    printf("\n%s ",ptr->firstname);
	printf("%s\n",ptr->lastname);
	printf("%d\n",ptr->age);
}