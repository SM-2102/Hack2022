#include<stdio.h>
#include<limits.h>

int mindist(int n,int dist[],int vis[]){
	int min = INT_MAX, min_index;

	for(int i=0;i<n;i++){
		if(dist[i]<=min && vis[i]==0){
			min = dist[i];
			min_index = i;
		}
	}
	return min_index;
}

void printsolution(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d->%d\n",i,arr[i]);
	}
}

void dijkstra(int n,int arr[][n],int st){
	int dist[n];
	int vis[n];
	for(int i=0;i<n;i++){
		dist[i] = INT_MAX;
		vis[i] = 0;
	}

dist[st] = 0;

for(int i=0;i<n-1;i++){
	int u = mindist(n,dist,vis);

	vis[u] = 1;

	for(int j=0;j<n;j++){
		if(vis[j]==0 && dist[u]!=INT_MAX && arr[u][j]!=0 && dist[u]+arr[u][j]<dist[j]){
			dist[j] = dist[u] + arr[u][j];
		}
	} 
}

printsolution(dist,n);
}

int main()
{
    int graph[9][9] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
 
    dijkstra(9,graph, 0);
 
    return 0;
}
