#include<stdio.h>

int linearsearch(int arr[],int size,int element)
{
	for(int i=0;i<size;i++)
	{
	if(arr[i]==element)
	{
	return i;
	}
	}
	return -1;
}

int main(){
	int arr[]={23,44,23,11,47};
	int size=sizeof(arr)/sizeof(int);
	int element=47;
	int searchindex=linearsearch(arr,size,element);
	printf("the element %d is at %d index",element,searchindex);
	return 0;
}
