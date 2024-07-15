#include<stdio.h>
void findMaxMin(int a[], int s, int e, int *max, int *min ){
    if(s==e){
        *max = *min = a[s];
    }
    else if(s == e-1){
        if(a[s] > a[e]){
            *max = a[s];
            *min = a[e];
        }
        else {
            *max = a[e];
            *min = a[s];
        }
    }
    else{
        int mid = (s+e)/2;
        findMaxMin(a,s,mid,max,min);
        int max1,min1;
        findMaxMin(a,s,mid+1,&max1,&min1);
        if(max1 > *max)
            *max = max1;
        if(min1 < *min)
            *min = min1;
    }
}

int main(){
    int n,i,max,min;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    //int max,min;
    findMaxMin(a,0,n-1,&max,&min);
    printf("%d\n",max);
    printf("%d",min);
        
}
