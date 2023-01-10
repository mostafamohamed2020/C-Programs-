/*assert macro
 *only used in testing cases
*/
#include <stdio.h>
//including assert header file
#include <assert.h>

int main(void){
	int x;
	scanf("%d\n",&x);
	assert(x<10);
	return 0;
}