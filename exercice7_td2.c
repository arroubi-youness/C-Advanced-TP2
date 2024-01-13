#include <stdio.h>
#include <string.h>
int addition(int a,int b){
  return a+b;

}
int soustraction(int a,int b){
  return a-b;

}
int multiplication(int a,int b){
  return a*b;

}
int division(int a,int b){
  return a/b;

}
int module(int a, int b){
  return a%b;
}
int main() {
    char ope[15];
    char part1[10];
    char part2 [10];
    char operation;
    int nbr_1=0;
    int nbr_2=0;
    int pos_ope=0;
    int nb1,nb2,nb3,nb4,nb5;
    nb1=nb2=nb3=nb4=nb5=0;
    char choice;
    int j=0;
    printf("------------HELLO USER-------------------\n");
    do{
    nb1=nb2=nb3=nb4=nb5=0;
    printf("enter the operation:");
    scanf("%s",ope);
    for(int i=0;i<strlen(ope);i++){
        if(ope[i]=='+' || ope[i]=='/' || ope[i]=='*' || ope[i]=='-'){
            operation=ope[i];
            pos_ope=i;
        }
    }
    for(int i=0;i<pos_ope;i++){
        part1[i]=ope[i];
    }
    j=0;
    for(int i=pos_ope+1;i<strlen(ope);i++){
        part2[j]=ope[i];
        j++;
    }
    nbr_1=atoi(part1);
    nbr_2=atoi(part2);

    switch(operation){
       case '+':printf("la somme :%d\n",nb1=addition(nbr_1,nbr_2));
           break;
       case '-':printf("la soustarction :%d\n",nb2=soustraction(nbr_1,nbr_2));
           break;
       case '*':printf("la multipliation :%d\n",nb3=multiplication(nbr_1,nbr_2));
       break;
       case '/':printf("la division :%d\n",nb4=division(nbr_1,nbr_2));
       break;
       case '%':printf("la module :%d\n",nb5=module(nbr_1,nbr_2));
       break;
       default:break;
    }
      printf("do you wanna repeat the process Y/N:");
      scanf(" %c",&choice);
    }while(choice=='Y');
    return 0;
}
