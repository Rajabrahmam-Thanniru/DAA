#include<stdio.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=1;i<n;i++){
        temp = a[i];
        for(j = i; j>0 && temp<a[j-1]; j--)
            a[j] = a[j-1];
        a[j] = temp;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
