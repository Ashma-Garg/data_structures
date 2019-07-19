#include <stdio.h>
#include <stdlib.h>
int main(int argc,const char*argv[]){

	int n=argc;
	int arr[n],a[n];
	for(int i=0;i<argc;i++){
		arr[i]=atoi(argv[i]);
	}
	int j=argc-1;
	for(int i=0;i<argc;i++)
	{
		a[i]=arr[j];
		j--;
		printf("%d",a[i]);
	}

}
