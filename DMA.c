#include <stdio.h>
#include <stdlib.h>
int main(){

	int m;
	int n;
	scanf("%d %d",&m,&n);

	int count=0;
	int* arr=(int*)malloc(m*n*sizeof(int));
	for(int i=0;i<m;i++){
	
		for(int j=0;j<n;j++){
		
			*(arr + i*m + j)=count++;
			printf("%d",*(arr + i*m + j));
		}
	}

}
