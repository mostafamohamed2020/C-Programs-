/****************************************************/
/* AUTHOR   : MUSTAFA MUHAMMED                      */
/* DATE     : 1 OCTOBRE 2020                        */
/* VERSION  : V01                                   */
/****************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long s = 0x11223344; /* DEFINE VARIABLE */
    unsigned char *ptr = &s;      /* POINTS TO THE FIRST BYTE */
	
    if(*ptr == 0x11)
    {
        printf("BIG INDIAN\n");
    }
	
    else if(*ptr == 0x44)
    {
        printf("LITTLE INDIAN");
    }
    
    return 0;
}
