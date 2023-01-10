#include <stdio.h>
//bit is set macro
#define bit_is_set(reg,bit_num) ((reg) & (1<<(bit_num)))
//bit is clear macro
#define bit_is_clear(reg,bit_num) (!(reg&(1<<bit_num)))
//set bit macro
#define set_bit(reg,bit_num) (reg=reg|(1<<bit_num))
//clear bit macro
#define clear_bit(reg,bit_num) (reg=reg&(~(1<<bit_num)))
//toggle bit macro
#define toggle_bit(reg,bit_num) (reg=reg^(1<<bit_num))
//circular shift left macro
#define cr_sh_l(reg,num_of_bits) (reg=((reg<<num_of_bits)|(reg>>(8-num_of_bits))))
//circular shift right macro
#define cr_sh_r(reg,num_of_bits) (reg=((reg>>num_of_bits)|(reg<<8-num_of_bits)))
int main(void){
	//declaring a byte variable 
  unsigned char a =0x0f;
    cr_sh_l(a,4);
    printf("%p\n",a);
	//using #if directive to check bit status
	if(bit_is_clear(a,0))
	{
		toggle_bit(a,6);
		printf("%p\n",a);
	}
	else
	{
	    
	    printf("tested bit isn't clear\n");
	    
	}

	return 0;
}