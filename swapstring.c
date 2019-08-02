#include <stdio.h>
#include <stdlib.h>
int main(){

        int i=0,count=0,count1=0;
        char str[]="hello";
        char s[]="it is";
        char temp;

                while(s[i]!='\0'){

                        temp=s[i];
                        s[i]=str[i];
                        str[i]=temp;
                        i++;
                }

        i=0;
        while(str[i]!='\0'){

                printf("%c",str[i]);
                i++;
        }
        i=0;
        printf("\n");
        while(s[i]!='\0'){

                printf("%c",s[i]);
                i++;
        }

}                  
