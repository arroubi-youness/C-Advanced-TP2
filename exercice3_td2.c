#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
 int i,j;
 void intialisation(int iNb_jours[12]){
     for(i=1;i<=12;i++){
        if(i==2){
            iNb_jours[2]=28;
        }
        else if((i<=7 && i%2==0)|| (i>7 && i%2!=0)){
            iNb_jours[i]=30;
        }
        else{
            iNb_jours[i]=31;
        }
     }
 }
 void  impression(int iNb_jours[12]){
        int i;
        for(i=1;i<=12;i++){
            printf("iNb_jours[%d]:%d\t\n",i,iNb_jours[i]);
        }

 }
 void donne_mois(int iNb_jours[12]){
     int nb;
     do{
        printf("enter the month number:");
        scanf("%d",&nb);
     }while(nb<=0 || nb>12);
     printf("le mois est numero %d et de nombre %d de jours",nb,iNb_jours[nb]);
 }
int main()
{
    int iNb_jours[12];
    intialisation(iNb_jours);
    impression(iNb_jours);
    donne_mois(iNb_jours);

    return 0;
}
