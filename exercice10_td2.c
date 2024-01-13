#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int distanceH(char *ch1,char *ch2){
  int i;int cmp=0;
  for(i=0;i<strlen(ch1);i++){
    if(ch1[i]!=ch2[i]){
        cmp++;
    }
  }
  return cmp;
}
int distance(int l,char text[][20]){
    int cmp=0;int min=80;
      for(int i=0;i<l-1;i++){
            cmp=distanceH(text[i],text[i+1] );
             if(cmp<min){

        min=cmp;
      }
            printf("%s\n",text[i]);
              printf("%s\n",text[i+1]);
            }

      if(cmp<min){

        min=cmp;
      }
  return min;
}
int main() {
    char ch1[30];
    char ch2[30];
    char ok[10][20];
    int l1,l2;
    int l;
    int lon=0;
    l1=l2=0;
    int distance_hamming=0;
    do{
    printf("enter the 1st string: ");
    gets(ch1);
    printf("enter the 2nd string: ");
    gets(ch2);
    l1=strlen(ch1);
    l2=strlen(ch2);
    }while(l1-l2!=0);
    distance_hamming=distanceH(ch1,ch2);
    printf("la distance hamming est :%d\n",distance_hamming);

    //langage
     printf("-----------------------------------------------------------\n");
     printf("enter the number of words un nombre pair: ");
     scanf("%d",&l);
     for(int i=0;i<l;i++){

        printf("enter word of same longeur :");
        scanf("%s",&ok[i]);
     }
     lon=distance(l,ok);
     printf("la longeur hamming de langage est:%d",lon);
    return 0;
}

