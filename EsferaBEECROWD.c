#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    double R,mult;
    double pi=3.14159;

    printf("Digite o valor do Raio para ser calculado a esfera:\n");
    scanf("%lf",&R);

    mult= (double)(4.0/3.0)*pi*pow(R,3);

    printf("O valor da esfera é de : VOLUME = %.3lf\n",mult);


    return 0;
}
