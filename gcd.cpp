#include <stdio.h>

int gcd(int n1,int n2)
{
	if(n1%n2==0)
		return n2;
	else
		return gcd(n2,n1%n2);
}

int main()
{
	int n1,n2;
	printf("Enter the two numbers : ");
	scanf("%d%d",&n1,&n2);
	printf("The GCD of %d and %d is %d.\n",n1,n2,gcd(n1,n2));
}
