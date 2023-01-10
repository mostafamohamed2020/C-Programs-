/***************************************************/
/* AUTHOR  : MUSTAFA MUHAMMED                      */
/* DATE    : 29 SEP 2021                           */
/* VERSION : V01                                   */
/***************************************************/

/* REGISTER DEFINITION WITH union */
union{
	
	struct {
		u8 bit0 : 1;
		u8 bit1 : 1;
		u8 bit2 : 1;
		u8 bit3 : 1;
		u8 bit4 : 1;
		u8 bit5 : 1;
		u8 bit6 : 1;
        u8 bit7 : 1;
	}Bit_Access;
  
u8 Byte_Access ;  
}Register;
