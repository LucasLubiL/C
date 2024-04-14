#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int cod,tam;
    double valor=0;

    scanf("%d %d",&cod,&tam);

    if(cod==1){
        valor=tam*4.00;
        printf("Total: R$ %.2lf\n",valor);
    }else if(cod==2){
        valor=tam*4.50;
        printf("Total: R$ %.2lf\n",valor);
    }else if(cod==3){
        valor=tam*5.00;
        printf("Total: R$ %.2lf\n",valor);
    }if(cod==4){
        valor=tam*2.00;
        printf("Total: R$ %.2lf\n",valor);
    }else if(cod==5){
        valor=tam*1.50;
        printf("Total: R$ %.2lf\n",valor);
    }

    return 0;
}
