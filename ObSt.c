#include<stdio.h>
#define max 15
void matM(int n,int p[],int q[]){
    int w[max][max] = {0};
    int i=0,j=0,con=0;
    
    while(j-i==con){
        
        if(i<j){
            w[i][j] = w[i][j-1]+p[j]+q[j];
            i++;
            j++;
        }
        else{
            
        }
    }
    
}
int main(){
    int n,i;
    scanf("%d",&n);
    int p[n],k[n],q[n+1];
    for(i=0;i<n;i++){
        scanf("%d",&k[i]);
        scanf("%d",&p[i]);
    }
    for(i=0;i<=n;i++)
        scanf("%d",&q[i]);
    matM(n,p,q);
    return 0;
}
