#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
int ne;
void affichage(int *tab ){
    int i;
    for(i=0;i<ne;i++){
        printf("tab[%d]:%d\t",i,*(tab+i));

    }
      printf("\n");
}
void saisie(int *tab){
    int i;
    printf("enter la taille:");
    scanf("%d",&ne);
    for (i=0;i<ne;i++){
        printf("tab[%d]:",i);
        scanf("%d",tab+i);
    }

}
void moyenne(int *tab){
  int i;
  float moy;
  int somme;
  somme = 0;
  for(i=0;i<ne;i++){
    somme=somme+tab[i];
  }
  moy=somme/ne;
  printf("la moyenne de le tableau est:%.1f\n",moy);

}
int max_ele(int *tab){
   int pos_max;
   int pos_max_test;
   pos_max_test=tab[0];
   pos_max=0;
   for(int i=1;i<ne;i++){
    if(tab[i]>pos_max_test){
        pos_max=i;
    }//fin if
   }//fin for
   return pos_max;
}//fin
int min_ele(int *tab){
int i;int pos_min;int min;min=tab[0];pos_min=0;
for(i=0;i<ne;i++){
    if(tab[i]<min){

        pos_min=i;
    }
}
return pos_min;
}
void supprime_min(int *tab,int pos_min){
    int i;
    int j=0;
    int table_without_min[ne-1];
    for(i=0;i<ne;i++){

        if(tab[i]!=tab[pos_min]){
            table_without_min[j]=tab[i];
            j++;
        }
    }
     for(i=0;i<ne-1;i++){

        printf("table_without_min[%d]:%d\t",i,table_without_min[i]);
     }
     printf("\n");
}
void supprime(int *tab,int pos_max){
    int tab_n_max[ne-1];
    int i;
    int j=0;
    for(i=0;i<ne;i++){

        if(tab[i]!= tab[pos_max]){
            tab_n_max[j]=tab[i];
            j++;
        }//fin if
    }//fin for
     for(i=0;i<ne-1;i++){
        printf("tab_without_max[%d]:%d\t",i,tab_n_max[i]);
     }
     printf("\n");

}
void ajout(int *tab){
  int i;
  int tab_with_position[ne+1];
  int position;int value;int j;j=0;
  printf("enter the value you wanna add : ");
  scanf("%d",&value);
  printf("enter the position where you wanna add the new value: ");
  scanf("%d",&position);

  for(i=0;i<ne+1;i++){
   if (i < position) {
            tab_with_position[i] = tab[i];
        } else if (i == position) {
            tab_with_position[i] = value;
        } else {
            tab_with_position[i] = tab[i - 1];
        }}
   for(i=0;i<ne+1;i++){
    printf("tab_with_position[%d]:%d\t",i,tab_with_position[i]);
   }
    printf("\n");
}

int main()
{
    int tab[20];
    int taille;
    int i;int min;int max;
    int option;
    int pos_max;
    int pos_min;

    do{

        printf("1-saisie et affichage\n");
        printf("2-Moyenne\n");
        printf("3-Suppression de max et affichage\n");
        printf("4-suppression de min et affichage\n");
        printf("5-Ajout d'un entier a une position donne\n");
        printf("6-Quitter\n");
        printf("-------------------------------------------\n");
        printf("enter an option between 1 and 6:");
        scanf("%d",&option);
        switch(option){
         case 1:
            printf("--------------------------------------\n");
            saisie(tab);
            affichage(tab);
            break;
         case 2:
            printf("--------------------------------------\n");
            moyenne(tab);
            break;

         case 3:
             printf("--------------------------------------\n");
             pos_max=max_ele(tab);
             printf("la position de l'elemet max de tableau:%d\n",pos_max);
             supprime(tab,pos_max);
            case 4:
             printf("--------------------------------------\n");
             pos_min=min_ele(tab);
             printf("la position de l'elemet max de tableau:%d\n",pos_min);
             supprime(tab,pos_min);
             break;
            case 5:

              printf("--------------------------------------\n");
              ajout(tab);
              break;
            case 6:
                exit(0);

        }


    }while(option>=1 || option<=6);



    return 0;
}
