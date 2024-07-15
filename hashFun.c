#include<stdio.h>
int hashFun(int n,int r){
	return n % r;
}
void main(){
	int n,m,i,ind;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&m);
		ind = hashFun(m,n);
		a[ind] = m;
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
