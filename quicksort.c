#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
	int temp=*x;
	*x=*y;
	*y=temp;
}

int partition(int a[], int p, int r) {
	int x=a[r],i=p-1,j;
	for(j=p;j<=r-1;j++) {
		if(a[j]<=x) {
			++i;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[r]);
	return i+1;
}

void quicksort(int a[], int p, int r) {
	int q;
	if(p<r) {
		q=partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}

void main() {
	int a[100],i,size;
	printf("Enter size:");
	scanf("%d",&size);
	printf("Enter Elements:\n");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	quicksort(a,0,size-1);
	printf("Sorted array:\n");
	for(i=0;i<size;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
