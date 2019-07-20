#include <stdio.h>
int main(){
int arr[]={1,2,3,4,5,6};
int num;
scanf("%d",&num);
for(int i=0;i<num;i++){
int temp=arr[5];
for(int j=4;j>=0;j--){
arr[j+1]=arr[j];
}
arr[0]=temp;
}
for(int i=0;i<6;i++)
printf("%d",arr[i]);
}
