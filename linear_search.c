#include <stdio.h>
int main(){
	int arr[10]={0};
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	int flag=0;
	int num=0;
	scanf("%d",&num);
	for(int i=0;i<n;i++){
		if(arr[i]==num){
		printf("%d",i);
		}
		else{
		flag=1;
		}
	}
	if(flag==1){
	printf("Number doesnt exist in array");
	}
	return 0;
}
