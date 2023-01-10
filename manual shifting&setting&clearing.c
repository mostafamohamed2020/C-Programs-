/***************************************************/
/* AUTHOR  : MUSTAFA MUHAMMED                      */
/* DATE    : 10 MAY 2020                           */
/* VERSION : V01                                   */
/***************************************************/

#include <stdio.h>
#include <stdlib.h>

/* BINARY POWER FUNCTION PROTOTYPE */
unsigned char binary_power(unsigned char pow)
{
    unsigned char i , value = 1;
	
    for(i = 1 ; i<= pow ; i++ )
    {
        value *= 2; /* BASE IS CONSTANT 2 */
    }
    return value;

}

/* SET_FLAG FUNCTION PROTOTYPE */
unsigned char set_flag(unsigned char reg, unsigned char bit_num)
{
    reg |= (binary_power(bit_num));
    return reg;
}

/* CLEAR_FLAG FUNCTION PROTOTYPE */
unsigned char clear_flag(unsigned char reg, unsigned char bit_num)
{
    reg &= (~ (binary_power(bit_num)) );
    return reg;
}

/* SHIFT TO RIGHT FUNCTION PROTOTYPE */
unsigned char shift_to_right(unsigned char reg,unsigned char bits)
{
    reg /= binary_power(bits);   /* THE MATHEMATICAL MEANING OF SHIFT RIGHT */
    return reg;
}

/* SHIFT TO LEFT FUNCTION PROTOTYPE */
unsigned char shift_to_left(unsigned char reg,unsigned char bits)
{
    reg *= binary_power(bits); /* THE MATHEMATICAL MEANING OF SHIFT LEFT */
    return reg;
}

int main()
{
    /* TEST CASE */
    unsigned char regstr=0xf0;
	
    printf("0x%X\n",shift_to_left(regstr,2));  /* EXPECTED 0XC0 */
    printf("0x%X\n",shift_to_right(regstr,3)); /* EXPECTED 0X1E */
    printf("0x%X\n",set_flag(regstr,3));       /* EXPECTED 0XF8 */
    printf("0x%X\n",clear_flag(regstr,4));     /* EXPECTED 0XE0 */
    return 0;
}
