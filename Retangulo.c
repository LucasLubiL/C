#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double base,altura,area,perimetro,diagonal,conta;

    printf("Digite a base do retangulo: ");
    scanf("%lf",&base);

    printf("Digite a altura do retangulo: ");
    scanf("%lf",&altura);

    area=base*altura;
    perimetro=base+base+altura+altura;
    conta=base*base+altura*altura;
    diagonal=sqrt(conta);

    printf("AREA = %.4lf\n",area);
    printf("PERIMETRO = %.4lf\n",perimetro);
    printf("DIAGONAL = %.4lf\n",diagonal);


    return 0;
}
