#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    double A,B,C;
    double pi=3.14159;
    double qa,qb,qc,qd,qe;
    printf("Digite 3 valores reais para ser feito o calculo com sua respectiva questao:\n");
    scanf("%lf %lf %lf",&A,&B,&C);

    qa=(A*C)/2;
    qb=pi*pow(C,2);
    qc=((A+B)*C)/2;
    qd=B*B;
    qe=A*B;

    printf("TRIANGULO: %.3lf\n",qa);
    printf("CIRCULO: %.3lf\n",qb);
    printf("TRAPEZIO: %.3lf\n",qc);
    printf("QUADRADO: %.3lf\n",qd);
    printf("RETANGULO: %.3lf\n",qe);



    return 0;
}

