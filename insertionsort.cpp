#include <iostream>
#include <array>
using namespace std;
int main(int argc,const char* argv[]){
	int n=argc-1;
	int arr[n],pos=0;
	for(int i=1;i<argc;i++)
	{
		arr[i-1]=atoi(argv[i]);
	}
	for(int i=1;i<n;i++){
		pos=i;
//this one didnt work
//		for(int j=i-1;j>=0;j--){
		
//			if(arr[j]>arr[pos]){
//			
//				int temp;
//				temp=arr[j];
//				arr[j]=arr[i];
//				arr[i]=temp;
//				pos--;
//			}
//		}
//This worked, but had one another option
//		while(arr[pos]<arr[pos-1]){
//		
//			int temp;
//			temp=arr[pos];
//			arr[pos]=arr[pos-1];
//			arr[pos-1]=temp;
//			pos--;
//		}
//this is the another option
		int temp=arr[pos];
		while(arr[pos-1]>temp){
			arr[pos]=arr[pos-1];
			pos--;
		}
		arr[pos]=temp;
	}
	for(int i=0;i<n;i++){
	
		cout<<arr[i]<<" ";
	}
}
