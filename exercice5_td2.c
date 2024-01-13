#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include<string.h>
 void crypt(char *cmessage){
     int l;
     l=strlen(cmessage);
     for(int i=0;i<l;i++){
         if(( ((int)cmessage[i]>=65 && (int)cmessage[i]<=90) || ((int)cmessage[i]>=97 && (int)cmessage[i]<=122) )){
            if (((int)cmessage[i]>=85 && (int)cmessage[i]<=90)||((int)cmessage[i]>=118 && (int)cmessage[i]<=122) )
           {
               cmessage[i]= 'c';
           }
            else{
               cmessage[i]=(int)cmessage[i]+5;
            }
         }
     }
    puts(cmessage);
 }

 int main(){
    char cmessage[60];
    printf("enter the message:");
    scanf("%s",cmessage);
    crypt(&cmessage);
    return 0;
}
