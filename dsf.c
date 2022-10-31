#include<stdio.h>
int a[10][10] ={{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0}
};

int visited[10] ={0,0,0,0,0,0,0,0,0,0};
void dfs(int u){
	printf("%d",u);
	visited[u]=1;
	for(int i=0;i<10;i++){
		if(a[u][i]==1 && visited[i]==0){
			dfs(i);
		}
	}
}

int main(){
	int n;
	printf("Enter no of edges");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int x,y;
		scanf("%d",&x);
		scanf("%d",&y);
		a[x][y] = a[y][x] =1;
	}
	int st;
	printf("\nEnter starting node\n");
	scanf("%d",&st);
	dfs(st);
	return 0;

}
