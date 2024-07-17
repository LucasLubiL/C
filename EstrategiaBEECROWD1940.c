#include <stdio.h>

int main()
{
    int J,linha;

    scanf("%d %d", &J, &linha);

    int jogo[linha][J];
    int vetor[J];

    for(int i =0; i<J;i++){
        vetor[i]=0;

    }
    for(int l=0;l<linha;l++){
        for(int c=0;c<J;c++){
            scanf("%d",&jogo[l][c]);

            vetor[c]=jogo[l][c]+vetor[c];
        }
    }

    int maior = vetor[0];
    int indice=0;
    for(int i=0; i<J; i++){
        if(vetor[i]>=maior){
            maior=vetor[i];
            indice=i;
        }
    }

    printf("%d\n",indice+1);

    return 0;
}
