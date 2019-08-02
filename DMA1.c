#include <stdio.h>
#include <stdlib.h>
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
int *arr[m];
int count=0;
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++){
	arr[i]=(int *)malloc(n*sizeof(int));

	*(*(arr+i)+j)=count++;
	printf("%d",*(*(arr+i)+j));
}}
}
