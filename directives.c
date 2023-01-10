#include <stdio.h>
#define max 7
#define log  
int t=10;  //global variable 
inline void maximum(int a,int b) //inline function(text replacement function)
{
	if(a>b)
	{printf("%d\n",a);}
	else 
	{printf("%d\n",b);}
}
 
#undef log     //#undef directive
int main(void){
	 int r=11;
   
	#if(max>10)  //#if directive
	{
		printf("hello world\n");
	}
	#else   //#else directive
	printf("hello earth\n");
	#endif  //#endif directive
	
	maximum(t,r);  //calling inline function
	
    #ifndef log   //check if #undef works or not
    {printf("log isn't defined\n");}
    #endif
    #ifdef log
    {printf("log is defined\n");}
	#endif
	return 0;
}