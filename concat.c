#include <stdio.h>
#define CONCAT(a,b) a##b;
int main(){

int z=CONCAT(1,2);
printf("%d",z);
}
