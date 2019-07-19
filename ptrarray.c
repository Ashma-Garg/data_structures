#include <stdio.h>
int main(){
int arr[5];
for(int i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
int *ptr=arr;
for(int i=0;i<5;i++){
printf("%d",*(ptr+i));
}

}
