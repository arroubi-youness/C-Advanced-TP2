#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
int longeur_chaine1(char ctab1[]){
    int i,l;
    l=0;i=0;
    while(ctab1[i]!='\0'){
        l++;
        i++;

    }
   // printf("%d",l);
    return l;
}
 int main(){
    char ctab1[30];
    char ctab2 [30];
    int longeur;
    printf("enter une chaine de caractere:");
    scanf("%s", ctab1);
    printf("enter une autre chaine de caractere:");
    scanf("%s", ctab2);

    longeur=longeur_chaine1(ctab1);
    printf("la longeur1 est :%d\n",longeur);
    longeur=longeur_chaine1(ctab2);
    printf("la longeu2 est :%d",longeur);
    return 0;
}
