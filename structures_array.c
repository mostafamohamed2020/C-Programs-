/*this code handles array of structures
/*author:mostafa gomaa
/*created in june 2020*/

#include <stdio.h>
#include <string.h>  /*for str_copy*/
struct employee{      /*declaring structure type*/
		int age;      /*structure members*/
		int salary;
		char name[20];
		};
int main(void){
	struct employee arr[3];     /*array of structure employee*/
	char temp_name[20];              /*temporary array to hold names*/
	int i;
	
	for(i=0;i<3;i++)             /*collecting employees information*/
	{
		printf("enter the age of employee %d\n",(i+1));
		scanf("%d\n",&arr[i].age);
		printf("enter the salary of employee %d\n",(i+1));
		scanf("%d\n",&arr[i].salary);
		printf("enter the name of employee %d\n",(i+1));
		scanf("%s\n",&temp_name);
		strcpy(arr[i].name,temp_name);
	} 
	for(i=0;i<3;i++)    /*calculating salaries after the raising*/
	{
		arr[i].salary+=(arr[i].salary*0.25);
	}
	printf("name\tage\tnew salary\n");
	
	for(i=0;i<3;i++)   /*desplaying employees information*/ 
	{
		printf("%s\t",arr[i].name);
		printf("%d\t",arr[i].age);
		printf("%d\n",arr[i].salary);
		
	}
	
	return 0;
}