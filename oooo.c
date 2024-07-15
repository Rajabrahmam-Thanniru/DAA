#include<stdio.h>
void findMaxMin(int a[], int s, int e, int *max, int *min){
    if(s==e){
        *max = *min = a[s];
    }
    else if(s == e-1){
        if(a[s] > a[e]){
            *max = a[s];
            *min = a[e];
        }
        else{
            *max = a[e];
            *min = a[s];
        }
    }
    else{
        int mid = (s+e)/2;
        findMaxMin(a,s,mid,max,min);
        int max1,min1;
        findMaxMin(a,mid+1,e,&max1,&min1);
        if(max1 > *max)
            *max = max1;
        if(min1 < *min)
            *min = min1;
            
    }
}
int main(){
    int i,max,min,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    findMaxMin(a,0,n-1,&max,&min);
    printf("%d ",max);
    printf("%d",min);
    return 0;
}
