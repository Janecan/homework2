#include <stdio.h>
#include <stdlib.h>

void swap(int *element1Ptr,int *element2Ptr)
{
	int hold =*element1Ptr;
	*element1Ptr=*element2Ptr;
	*element2Ptr=hold;
}

