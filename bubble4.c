#include <stdio.h>
#include <stdlib.h>

void bubble(const int *const array,size_t size) 
{
 int i;
 unsigned int pass;
 size_t j;
 int arraycopy[5];
 for(i=0;i<5;i++){
 	arraycopy[i]=array[i];
 }
	for (pass=0;pass<size-1;++pass){
	  for (j=0;j<size-1;++j){
		if(array[j]>array[j+1]){
			int hold =arraycopy[j];
	        arraycopy[j]=arraycopy[j+1];
	        arraycopy[j+1]=hold;
		}
	  }
   }
}
