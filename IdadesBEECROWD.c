#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int idade=0,soma=0,cont=0;
    double media=0;

    while(idade>=0){
        cont++;
        soma=soma+idade;
        scanf("%d",&idade);
    }

    media=(double)soma/(cont-1);

    printf("%.2lf\n",media);

    return 0;
}



