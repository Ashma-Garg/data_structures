#include <stdio.h>
#include <stdlib.h>
int main(int argc,const char* argv[]){
	int arr[argc-1],a[argc-1];
	int *ptr;
	for(int i=1;i<argc;i++){
	arr[i-1]=atoi(argv[i]);
	}
	int i=0;
	ptr=arr;
	for(int j=argc-2;j>=0;j--)
	{
	a[i]=*(ptr+j);
	printf("%d",a[i]);
	i++;
	}
}
