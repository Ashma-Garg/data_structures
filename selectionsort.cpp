#include <iostream>
#include <array>
using namespace std;
int main(){

	int arr[6]={2,16,10,30,20,1};
	int flag=0;
	for(int i=0;i<6;i++){
	
		int min=arr[i];
		int pos=0;
		for(int j=i+1;j<6;j++){
			if(min>arr[j]){
			min=arr[j];
			pos=j;
			flag=1;
			}
	}
		if(flag==1){
		int temp;
		temp=arr[i];
		arr[i]=min;
		arr[pos]=temp;}
		flag=0;
	}
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}
}
