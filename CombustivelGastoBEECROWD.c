#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int horas;
    int velocidade;
    double aux,total;

    scanf("%d %d",&horas,&velocidade);

    aux=horas*velocidade;
    total= (double) aux/12;

    printf("%.3lf\n",total);


    return 0;
}



