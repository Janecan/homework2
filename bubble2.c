#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void bubble(int *const array,size_t size) 
{
 void swap(int *element1Ptr,int *element2Ptr);	
 unsigned int pass;
 size_t j;

	for (pass=0;pass<size-1;++pass){
	  for (j=0;j<size-1;++j){
		if(array[j]>array[j+1]){
			swap(&array[j],&array[j+1]);
		}
	  }
   }
}

