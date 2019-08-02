#include <stdio.h>
#include <stdlib.h>
int main(){

	int n;
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
	
		for(int j=0;j<n;j++)
		{
		
			scanf("%d",&arr[i][j]);
		}
	}

	int *ptr[n];
	for(int i=0;i<n;i++)
	{
	
		ptr[i]=arr[i];
	}
	       for(int i=0;i<n;i++)
        {

                for(int j=0;j<n;j++)
                {

                        printf("%d",*(*(ptr+i)+j));
                }
		printf("\n");
        }




}
