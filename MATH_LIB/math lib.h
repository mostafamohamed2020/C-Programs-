/***************************************************/
/* AUTHOR  : MUSTAFA MUHAMMED                      */
/* DATE    : 12 MAY 2020                           */
/* VERSION : V01                                   */
/***************************************************/

#ifndef MATH_LIB_H_INCLUDED
#define MATH_LIB_H_INCLUDED

/* PRIMITIVE MACROS */
#define sum(a,b) ((a)+(b))
#define sub(a,b) ((a)-(b))
#define mul(a,b) ((a)*(b))
#define div(a,b) ((a)/(b))
#define mod(a,b) ((a)%(b))
#define max(a,b) (a>b? a:b)

/* FUNCTION TO CONVERT FROM STRING(UP TO 5 DIGITS) TO INTEGER */
unsigned int  s_to_i(char *str , int digits)
{
	int counter = 0;
	int number  = 0 , result = 0;
	
	/* SWITCH ON NUMBER OF DIGITS */
	switch (digits)
	{
		case 1:
		number = 1;
		break;
		
		case 2:
		number = 10;
		break;
		
		case 3:
		number = 100;
		break;
		
		case 4:
		number = 1000;
		break;
		
		case 5:
		number = 10000;
		break;
		
		default:
		break;
		
	}
	
	/* LOOP UNTILL THE END OF PASSED STRING */
	while (str[counter] != '\0')
	{
		/* CONVERT CHARACTER TO NUMBER */
		result += ((str[counter] - 48) * number);
		number = (number / 10);
		counter++;
	}
	
	return result ;
}

/* POWER FUNCTION */
static inline int power (int base,int pow)
{
    int i , p = 1;
	
    for(i = 0 ; i < pow ; i++)
    {
       p *= base;
    }
    return p;
}

/* FUNCTION TO CONVERT FROM DECIMEL TO BINARY */
static inline void binary (int num)
{
	/* ARRAY TO STORE BINARY VALUE */
	int bin[10]={0,0,0,0,0,0,0,0,0,0},i;
	
	for (i = 0 ; num > 0 ; i++)
	{
		bin[i] = num % 2;
		num = num / 2;
		
	}
	printf("0b");
	
	for (i = 9 ; i >= 0 ; i--)
	{
		printf("%d",bin[i]);
	}
}

/* FUNCTION TO CALCULATE FACTORIAL */
static inline int factorial (int num)
{
	int fact = 1 , i;
	
	for (i=1;i<=num;i++)
	{
		fact*=i;
	}
	return fact ;
}

//FUNCTION TO CALCULATE SQUARE
static inline int square(int num)
{
	int q;
   	for (q = 1 ; q < num ; q++)
	{
		if ((q*q) == num)
		{
			return q;
		}
	}


}
#endif // MATH_LIB_H_INCLUDED
