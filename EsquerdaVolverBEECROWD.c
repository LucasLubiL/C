#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

    int N=1,cont;
    char volver;

    while(N>0){
        cont=1;
        scanf("%d",&N);
        if(N!=0){
           for(int i=0;i<N;i++){
               scanf(" %c",&volver);
               if(volver=='D'){
                  cont++;
                  if(cont==5){
                    cont=1;
                  }
               }else if(volver=='E'){
                  cont--;
                  if(cont==0){
                     cont=4;
                  }
               }
           }
           if(cont==1){
               printf("N\n");
           }else if(cont==2){
               printf("L\n");
           }else if(cont==3){
               printf("S\n");
           }else if(cont==4){
               printf("O\n");
           }
        }
    }

    return 0;
}






