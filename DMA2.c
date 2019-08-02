#include <stdio.h>
#include <stdlib.h>
int main(){
	int m;
	int count=0;
	scanf("%d",&m);

	int **arr=(int **)malloc(m*sizeof(int*));
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			arr[i]=(int *)malloc(m*sizeof(int));
			*(*(arr+i)+j)=count++;
			printf("%d",*(*(arr+i)+j));
		}
	}
}
