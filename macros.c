/*examples of some macros
 *author:mostafa gomaa
 *created in 25/7/2020*/ 

#include <stdio.h>
//max macro
#define MAX(x,y) ((x)>(y)?(x):(y))
//add macro
#define ADD(x,y) ((x)+(y))
//set bit macro(OR)
#define set_bit(REG,BIT_NO) (REG=REG|(1<<BIT_NO))
//clear bit macro(AND)
#define clear_bit(REG,BIT_NO) (REG=REG&(~(1<<BIT_NO)))
//toggle bit macro(X-OR)
#define toggle_bit(REG,BIT_NO) (REG=REG^(1<<BIT_NO))
//rotate to right macro
# define rotate_to_right(REG,NO_OF_BITS) ((REG>>NO_OF_BITS)|(REG<<(8-(NO_OF_BITS))))
//rotatre to left macro
# define rotate_to_left(REG,NO_OF_BITS) ((REG<<NO_OF_BITS)|(REG>>(8-(NO_OF_BITS))))
//if bit is set macro
# define bit_is_set(REG,INDEX_OF_BIT) (REG&(1<<INDEX_OF_BIT))
//if bit is clear
#define bit_is_clear(REG,INDEX_OF_BIT) (!(REG&(1<<INDEX_OF_BIT)))

int main(void){
	int num1=15,num2=2;
	printf("the maximum is %d\n",MAX(num1,num2));
	printf("the sum is %d\n",ADD(num1,num2));
	return 0;
}