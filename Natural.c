#include<stdio.h>

int main(){

    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    if(n>0){
        printf("%d is a Natural number.",n);
    }
    else{
        printf("%d is not a Natural number.",n);
    }
    return 0;
}
