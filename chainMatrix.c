#include<stdio.h>
#define max 15
int min(int m[],int i,int j,int *pk){
    int mn = m[i];
    *pk = i;
    int s,e;            // finding the minimum from c matrix and retruning inclding k val
    for(s = i; s<j;s++){
        if(mn > m[s]){
            mn = m[s];
            *pk = s;
        }
    }
    return mn;
}
void ChainMatrixMul(int n, int a[]){ // calculating the c and k matrix
    int  c[max][max] = {0}, k[max][max]={0};
    int i,j,d=1;
    i = 1,j = i+d;
    while(j-i==d){
        if(j>n){
            d++;
            i=1;
            j=i+d;
            if(d>n)    
                break;
        }
            else{
                int m[max] = {0};
                int ke;
                for(ke=i;ke<j;ke++){
                    m[ke] = c[i][ke]+c[ke+1][j]+a[i-1]*a[ke]*a[j];
                }
                c[i][j] = min(m,i,j,&ke);
                k[i][j] = ke;
                i++;
                j++;
            }
        }
    printf("%d\n",c[1][n]);
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++)
           printf(" ");
        for(j=1;j<=n;j++){
            if(i<=j)
               printf("%d",k[i][j]);
            if(j<n)
                printf(" ");
        }
        

        printf("\n");
    }  
}
void main()
{
    int n,i;
    scanf("%d",&n); // taking the number of matrixs
    int a[n];
    for(i=0;i<=n;i++){
        scanf("%d",&a[i]); // taking the dimentions of the matrix
    }
    ChainMatrixMul(n,a);
}
