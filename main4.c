#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void bubble (const int *const array,size_t size);
int main(void) {
    {
	int a[SIZE]={5,22,31,24,11};
	size_t i;
	printf("original");
	    for (i=0;i<SIZE;++i){
	       printf(" %4d",a[i]);
	      }
    bubble(a,SIZE);
    printf("\n  ascend");
        for (i=0;i<SIZE;++i){
	       printf(" %4d",a[i]);
	      }
    }
}
