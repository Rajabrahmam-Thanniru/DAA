#include<stdio.h>
int Ls (int a[],int n){
	int m = a[0];
	int i ;
	for(i=1;i<n;i++){
		if(a[i] > m){
			m = a[i];
			break;
		}
	}
	return m;
}
void main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int mm = Ls(a,n);
	printf("%d",mm);
}
