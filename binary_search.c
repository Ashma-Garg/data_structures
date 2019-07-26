#include <stdio.h>
int main(int argc,const char* argv[]){

	int n=argc-2;
	int arr[n];
	for(int i=1;i<argc-1;i++){
		arr[i-1]=atoi(argv[i]);
	}
	int num=0;
	num=atoi(argv[argc-1]);
	
	int result=binarysearch(arr,0,n-1,num);
	if(result==-1){
	printf("Number doesnt exist");
	}
	else{
	printf("Number exist at %d",result);
	}
	return 0;
}
int binarysearch(int arr[],int a,int b,int num){
if(b>=a){
int mid=a + (b-a)/2;

if(arr[mid]==num){
	return mid;
}
if(arr[mid]>num){
	return binarysearch(arr,a,mid-1,num);
}
return binarysearch(arr,mid+1,b,num);
}
return -1;
}
