#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

    int N,J,Z,cont=1;
    int contaUM=0,totalJ=0,totalZ=0;

    scanf("%d",&N);

    while(N!=0){
            
      totalJ=0;
      totalZ=0;
      
      printf("Teste %d\n",cont);
      cont++;
      for(int i=0;i<N;i++){

          scanf("%d %d",&J,&Z);

          totalJ=totalJ+J;
          totalZ=totalZ+Z;

          contaUM=totalJ-totalZ;

          printf("%d\n",contaUM);

      }
      
      printf("\n");
      
      scanf("%d",&N);

    }

    return 0;
}
