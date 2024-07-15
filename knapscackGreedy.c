#include<stdio.h>
struct item{
    int wt,pf, ino;
    float pwr,x;
};

void knapsack(struct item a[],int n,int m){ // implimenting knapscack
    float tp = 0;
    int i,j;
    for(i=0;i<n;i++){
        if(m>0){
            if(a[i].wt <= m){
                a[i].x = 1.0;
                printf("%d ", a[i].wt);
                m -= a[i].wt;
                tp += a[i].pf ;
            }
            else
                break;
    }
    }
        if(m>0){
          a[i].x =  m/((float)a[i].wt);
          printf("%.2f",(a[i].wt * a[i].x));
          m = 0 ;
          tp += (a[i].x * a[i].pf);  
        }
      printf("\n%.2f",tp);  
}

void sort(struct item a[], int n){
    int i,j;
    struct item temp;
    for(i=1;i<n;i++){
        temp = a[i];
        for(j = i-1; j>=0;j--){     // sorting according to profit by weight ratio
            if(a[j].pwr < temp.pwr)
                a[j+1] = a[j];
            else 
                break;
        }
        a[j+1] = temp;
    }
}
void main(){
    int i,j,m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    struct item a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i].wt); // taking input of weights
        scanf("%d",&a[i].pf);//  taking input of profits
        a[i].x = 0.0;
        a[i].pwr =((float) a[i].pf)/a[i].wt;// calculating the profit by weight ratio 
        a[i].ino=i+1;
    }
    sort(a,n);
    knapsack(a,n,m);   
}
