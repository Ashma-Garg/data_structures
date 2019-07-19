#include <stdio.h>
#include <stdlib.h>
int main(int argc,const char*argv[]){
int k=argc-2;

        int arr[argc-1];
        for(int i=1;i<argc;i++)
        {
                arr[i-1]=atoi(argv[i]);
        }
        revers(arr,k);


}
int revers(int arr[],int n){
while(n>=0){
printf("%d",arr[n]);
return revers(arr,n-1);
}
}
