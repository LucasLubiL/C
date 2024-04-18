#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int N,negativos=0;

    printf("Digite o tamanho da matriz desejada: ");
    scanf("%d",&N);

    int matriz[N][N];

    printf("Digite os valores dentro desta matriz:\n");

    for(int l=0;l<N;l++){
        for(int c=0;c<N;c++){
            printf("[%d][%d] : ",l,c);
            scanf("%d",&matriz[l][c]);
        }
    }

    for(int l=0;l<N;l++){
        for(int c=0;c<N;c++){
            printf("%d ",matriz[l][c]);
        }
        printf("\n");
    }

    printf("Os valores da diagonal principal sao :");

    for(int l=0;l<N;l++){
        for(int c=0;c<N;c++){
            if(matriz[l]==matriz[c]){
                printf("%d ",matriz[l][c]);
            }
        }
    }

    printf("\n");

    for(int l=0;l<N;l++){
        for(int c=0;c<N;c++){
            if(matriz[l][c]<0){
                negativos++;
            }
        }
    }

    printf("A quantidade de numeros negativos nesta matriz e de : %d\n",negativos);

    return 0;
}
