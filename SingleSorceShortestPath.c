#include<stdio.h>
#define m 10
#define max 999
void Dijkstra(int a[m][m],int n,int src){
    int i,j;
    int c[m][m]; // initailizing the c matrix
    int d[m];    // initailizing the d array to store the min distance
    int v[m] = {0}; // initializing the v array
    int count=0;
    int min,next;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=0)
                c[i][j] = a[i][j];
            else
                c[i][j]=max;
        }
    }
    for(i=0;i<n;i++)
    {
            d[i]=c[src][i];
        v[i] =0;
    
    }
    d[src]=0;
    v[src]=1;
    count= 1;
    while(count<n-1){
        min = max;
        for(i=0;i<n;i++){
            if(d[i] < min && !v[i]){
                min = d[i];
                next = i;
            }
        } 
        v[next]=1;
        for(i=0;i<n;i++){
            if(!v[i] && (min + c[next][i]) < d[i]){
            d[i] = min+c[next][i];
            }
        }
    count++;
    }
    for(i=0;i<n;i++)
    {
        if(i!=src)
        printf("%d -> %d : %d\n",src,i,d[i]);
    }
}
int main()
{
    int n,e,i,j,src,s,d,w;
    scanf("%d%d",&n,&e); // takng the input of number of edges and vertices
    int a[m][m] = {0}; // initailizing the matrix a which strores the weights
    for(i=0;i<e;i++){
        scanf("%d%d%d",&s,&d,&w);
        a[s][d] = w;
    }
    scanf("%d",&src); // taking the starting point as input
    Dijkstra(a,n,src); // calling the funtion Dijkstra to find the shortest path
    return 0;
}
