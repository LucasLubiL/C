#include <stdio.h>
#include <stdlib.h>


int main() {

    int X;
    double Y;

    printf("Digite a distancia percorrida:\n");
    scanf("%d",&X);

    printf("Digite o total de combustivel gasto:\n");
    scanf("%lf",&Y);

    double total=X/Y;

    printf("%.3lf km/l",total);

    return 0;
}


