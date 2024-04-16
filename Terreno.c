#include <stdio.h>
#include <stdlib.h>

int main()
{

    double largura,comprimento,valor,conta1,conta2;

    printf("Digite a largura do terreno: ");
    scanf("%lf",&largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf",&comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf",&valor);

    conta1=largura*comprimento;

    printf("Area do terreno = %.2lf\n",conta1);

    conta2=conta1*valor;

    printf("Preco do terreno = %.2lf\n",conta2);

    return 0;
}
