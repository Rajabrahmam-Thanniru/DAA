#include<stdio.h>
int main()
{
    int n,i,j,c,b,d;
    scanf("%d%d",&n,&d);// taking the number users and number of connections as input 
    int a[10][10] = {0}; // intializing the adj matrix with 0
    for(i=0;i<n;i++){
            scanf("%d%d",&c,&b); // taking the source and destination as input
            a[c-1][b-1] = b;
            a[b-1][c-1] = c;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]); // printing the given matrix
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        printf("%d->",i+1);
        for(j=0;j<n;j++){
            if(a[i][j]!=0)
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
