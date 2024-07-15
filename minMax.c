#include<stdio.h>
//int i,j;
void findmaxmin(int a[],int s, int e, int *max,int *min){
    if(s==e){
        *max = *min = a[s];
    }
    else if(s == e-1){
      if(a[s] > a[e]){
      *max = a[s];     // if easy solution
          *min = a[e];
      }
        else{
            *max = a[e];
            *min = a[s];
        }
    }
    else{
    int mid = (s+e)/2;    // sorting for max solution
        findmaxmin(a,s,mid,max,min);
        int max1,min1;
        findmaxmin(a,mid+1,e,&max1,&min1);
        if(max1 > *max){
        *max = max1;
        } 
        if(min1 < *min){
         *min = min1;
        }
    }
}
void main(){
    int n,max,min,i;
    scanf("%d",&n); // taking the input as n i.e number of students
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]); // taking n number students as input
   findmaxmin(a,0,n-1,&max,&min); // calling the funtion
    printf("%d ",max);// printing max
    printf("%d",min);// printing min
}
