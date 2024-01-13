#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* saisie(){
    char *text;
    text =(char*)malloc(sizeof(char)*10);
    printf("enter a string:");
    gets(text);
    return text;

}
void affiche(char *text){
   puts(text);
}
void reverse(char *text){
     char *text_test;
      text_test =(char*)malloc(sizeof(char)*10);
     for(int i=0;i<strlen(text);i++){

        text_test[i]=text[strlen(text)-i-1];
     }
     for(int i=0;i<strlen(text_test);i++){

        text[i]=text_test[i];
     }
     puts(text);
}
int nombre_mots(char *text){
    int i,cmp,test;
    cmp=0;test=0;
     for(i=0;i<strlen(text);i++){
        if (text[i]==' '){
            if((text[i+1]==' ' && text[i+2]!=' ')){
                test++;//pour tester est ce qu'il ya duex \n \n successif
            }
            cmp++;
        }
     }
     return cmp-test;
}
int main() {
    int test;
    char answer;
    int test2=0;
    char *T =NULL;
    //char* text;
    do{
    if(test2==1){
    printf("Press any key to continue...\n");
    getchar();
    while (getchar() != '\n');
    }

    printf("1-saisie la chaine \n");
    printf("2-affiche la chaine \n");
    printf("3-inverse la chaine \n");
    printf("4-le nombre de mots \n");
    printf("5-Quitter");
    printf("------------------------------------\n");
    printf("enter an option:");
    scanf("%d",&test);
    while(getchar()!='\n');
    switch(test){
    case 1: T=saisie();
    break;
    case 2:
        affiche(T);
        break;
    case 3: reverse(T);
    break;
    case 4: answer=nombre_mots(T);
    printf("le nombre de est :%d\n",answer+1);
    break;
    default:break;

    }
    test2=1;
 }while(test>=1 && test<=4);
    return 0;
}

