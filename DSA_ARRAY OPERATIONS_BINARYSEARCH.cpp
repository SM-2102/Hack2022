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

int binarysearch(int arr[],int size,int element){
int low,mid,high;
low=0;
high=size-1;
while(low<=high)
	{
	mid=(low+high)/2;
	if(arr[mid]==element)
	{
	return mid;
	}
	if(arr[mid]>element)
	{
		low=mid+1;
	}
	else
	{
		high=mid-1;
	}
}
return -1;
}

int main(){
	int arr[]={23,34,45,56,78};
	int size=sizeof(arr)/sizeof(int);
	int element=45;
	int searchindex=binarysearch(arr,size,element);
	printf("the element %d is at %d index",element,searchindex);
	return 0;
}
