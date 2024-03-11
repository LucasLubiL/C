#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

    int x;
    int valor,sorte,aux=0,cont=1;

    scanf("%d",&x);

    while(x!=0){
       aux=0;
       for(int i=1;i<=x;i++){
           scanf("%d",&valor);
           if(aux==0){
              if(valor==i){
                 sorte=valor;
                 aux=1;
              }
           }

       }
       printf("Teste %d\n",cont);
       printf("%d\n\n",sorte);
       cont++;
       scanf("%d",&x);
    }

    return 0;
}






