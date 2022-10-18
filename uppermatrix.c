#include<stdio.h>
#include<stdlib.h>
struct Matrix{
    int n;
    int *A;
};
void rSet(struct Matrix *m,int i,int j,int x){
    if(j>=i)
    m->A[j*(j-1)/2+i-j]=x;
}
void rDisplay(struct Matrix m){
    int i,j;
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            if(j>=i)
            printf("%d ",m.A[j*(j-1)/2+i-j]);
            else 
            printf("0 ");
        }printf("\n");
    }
}
int main(){
    int i,j,x;
    struct Matrix m;
    printf("Enter the dimension");
    scanf("%d",&m.n);
    m.A=(int *)malloc(m.n*(m.n-1)/2*sizeof(int));
    printf("Elements are\n");
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            scanf("%d",&x);
            rSet(&m,i,j,x);
        }
    }
    printf("\n");
    rDisplay(m);
    return 0;
}