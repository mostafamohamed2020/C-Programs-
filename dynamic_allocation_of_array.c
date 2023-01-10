#include <stdio.h>
//including standard library for malloc
#include <stdlib.h>
//including assert header file
#include <assert.h>
int main() {
    //variables decleration
    /*n is the size of array,ptr to point to array elements
    sum to store the sum of elements
    i is used in the loop */
    int n,*ptr,sum=0,i;
    //allocating array dynamically
    //taking the array size
    printf("enter the array's size\n");
    scanf("%d\n",&n);
    ptr=malloc(n*sizeof(int));
    //check if allocating completed or not
    assert(ptr!=NULL);
    //passing elements to the array & produce the sum
    for(i=0;i<n;++i)
    {
        printf("enter element num %d\n",i+1);
        scanf("%d",(ptr+i));
        sum+=*(ptr+i);
    }
    printf("%d\n",sum);
    //free the array
    free(ptr);
    return 0;
}