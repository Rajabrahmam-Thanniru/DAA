#include<stdio.h>
#include<stdlib.h>
#define max 10
int sol = 0;
int a[max] = {-1};
void PrintA(int tq){
    int i;
    for(i=0;i<tq;i++)
        printf("%4d",a[i]);
    printf("\n");
}
int placeAt(int r, int c){
    int i;
    for(i=0;i<r;i++){
        if(a[i] == c)
            return c;
        else if(abs(a[i]-c)==abs(r-i))
            return c;
    }
    return -1;
}
void Queen(int q,int tq){
    int i;
    for(i=0;i<tq;i++){
        if(placeAt(q,i)== -1){
            a[q] = i;
            if(q == tq-1){
                printf("Solution-%d:",++sol);
                PrintA(tq); 
            }
            else{
                Queen(q+1,tq);
            }
        }
    }
}
int main(){
    int n,i;
    scanf("%d",&n);
    Queen(0,n);
    if(sol == 0){
	
        printf("No Solutions for %d-Queen Problem",n);
    }
    return 0;
}
