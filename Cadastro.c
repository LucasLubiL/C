#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N,pessoa=0,cont=0;
    double mediaA=0,mediaI=0,contaAltura=0;

    printf("Digite quantas vezes ira cadastrar as pessoas(1 cadastro por pessoa):\n");
    scanf("%d",&N);

    char nome[N][50];
    int idade[N];
    double altura[N];

    for(int i=0;i<N;i++){

        pessoa++;
        printf("Digite os dados da %da pessoa: \n",pessoa);
        printf("Nome: ");
        scanf("%s",&nome[i]);
        printf("Idade: ");
        scanf("%d",&idade[i]);
        printf("Altura: ");
        scanf("%lf",&altura[i]);

        contaAltura=contaAltura+altura[i];

        if(idade[i]<16){
            cont++;
        }

    }

    mediaA=contaAltura/N;
    mediaI=(double)cont*100.0/N;

    printf("A altura media das pessoas e de : %.2lf\n",mediaA);
    printf("A porcentagem da idade das pessoas menores de 18 anos e de : %.2lf %%\n",mediaI);
    printf("As pessoas menores de 18 anos sao : \n");

    for(int i=0;i<N;i++){
        if(idade[i]<16){
            printf("%s\n",nome[i]);
        }

    }

    return 0;
}
