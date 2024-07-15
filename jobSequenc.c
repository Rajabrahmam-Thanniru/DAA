#include<stdio.h>
#define m 15
struct job{
    int s,p,d;
};
void jobSequence(struct job a[],int n,int max){ 
    int sq[m] = {-1};
    int f = 0,i, tp = 0,ct;
    for(i=0;i<n;i++){
        ct = a[i].d;
        while((ct > -1) && (sq[ct-1]>0))
            ct--;
        if(ct==-1)
            continue;
        sq[ct-1]=a[i].s;
        tp += a[i].p;
        f++;
        if(f==max)
            break;
    }
    printf("%d\n",tp);
    for(i=0;i<max;i++){
        if(sq[i]<=0)
            continue;
        else
            printf("%d ",sq[i]);
    }
}
void sort(struct job a[],int n){ // sorting the given data in decreaing order of profits
    int i,j;
    struct job temp;
    for(i=1;i<n;i++){
        temp = a[i];
        for(j=i-1;j>=0;j--){
            if(a[i].p < temp.p)
                a[j+1] = a[j];
            else 
                break;
        }
        a[j+1] = temp;
    }
}
int main()
{
    int n,i,max=-1,dl,pf;
    scanf("%d",&n);
    struct job a[n];
    for(i=0;i<n;i++){
        a[i].s = i+1;
        scanf("%d %d",&dl,&pf); // initilizing the deadline and profit
        a[i].d = dl;
        a[i].p = pf;
        if(dl > max)
            max = dl;
    }
    sort(a,n);
    jobSequence(a, n,max);
    return 0;
}
