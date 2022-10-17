#include<stdio.h>
#include<math.h>
double f(double x){
	return x*x*x-8*x-4;
}
void regula(double a, double b){
	if((f(a)*f(b))>=0){
		printf("wrong initials");
		return ;
	}
	int deci;
	printf("enter the decimal place");
	scanf("%d", &deci);
	double c;
	for(int i=0; i<10000000; i++){
		c=(a*f(b)-b*f(a))/ f(b)-f(a);
		if(f(c)==0.0)
		break;
		else if((f(c)*f(a))<0)
		b=c;
		else
		a=c;
	}
	int p=(int)pow(10,deci);
	int s=(int)(c*p);
	int ab=s/p;
	int cd=abs(s%p);
	printf("the required root is %d.%d\n", ab , cd);


}
int main(){
	double a=-200 , b=300;
	regula(a,b);
	return 0;
}
