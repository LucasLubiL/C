#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int A=0,G=0,D=0,caso;

    do{
       scanf("%d",&caso);

       if(caso==1){
          A=A+1;
       }
       if(caso==2){
          G=G+1;
       }
       if(caso==3){
          D=D+1;
       }

    }while(caso!=4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",A);
    printf("Gasolina: %d\n",G);
    printf("Diesel: %d\n",D);

    return 0;
}



