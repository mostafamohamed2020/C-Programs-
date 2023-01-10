#include <stdio.h>

int main(void){
	//declaring variables
	/*num the checked number
	ptr to decide whether big or little endian*/
	unsigned long num=0x11223344;
	unsigned char *ptr=&num;
	//check if it is little or big endian
	if(*ptr==0x44) //if LSB stored in the higher address
	{
		printf("big_endian\n");
	}
	else if(*ptr==0x11)  //if MSB stored in the higher address
	{
		printf("little_endian\n");
	}
	return 0;
}