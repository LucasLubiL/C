#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int M,N;
    double soma=0;

    printf("Digite o tamanho de linhas da matriz: ");
    scanf("%d",&M);
    printf("Digite o tamanho de colunas da matriz: ");
    scanf("%d",&N);
    printf("\n");

    double matriz[M][N];
    double vetor[N];

    printf("Digite os valores dentro da matriz: \n");

    for(int l=0;l<M;l++){
        for(int c=0;c<N;c++){
            printf("[%d][%d]: ",l,c);
            scanf("%lf",&matriz[l][c]);
        }
    }

    printf("\n");
    printf("Esta eh sua matriz: \n");

    for(int l=0;l<M;l++){
        for(int c=0;c<N;c++){
            printf("%.1lf ",matriz[l][c]);
        }
        printf("\n");
    }

    printf("\nVETOR GERADO: \n");

    for(int l=0;l<M;l++){
        soma=0;
        for(int c=0;c<N;c++){
            vetor[c]=matriz[l][c];
        }
        for(int i=0;i<N;i++){
            soma=soma+vetor[i];
        }
        printf("%.1lf \n",soma);
    }

    return 0;
}
