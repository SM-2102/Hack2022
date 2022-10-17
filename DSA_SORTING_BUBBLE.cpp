#include<stdio.h>
void traverse(int*a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
void bubblesort(int*a,int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		}
	}
}
int main()
{
	int a[]={12,76,4,87,22,44,10,9};
	int n=8;
	traverse(a,n);
	bubblesort(a,n);
	traverse(a,n);
	return 0;
}
