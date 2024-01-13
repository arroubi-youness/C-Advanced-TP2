#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
void Afficher_matrice(int iMat[][5]){
    int i;
    int  j;
for(i=0; i<5; i++){
printf("___________________________\n");
for(j=0; j<5; j++)
printf("|%d",iMat[i][j]);
printf("|\n");
}
printf("____________________________\n");
}
int main()
{

    int mat[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
   // affiche(mat);
    Afficher_matrice(mat);
    return 0;
}
