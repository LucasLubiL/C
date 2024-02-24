#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,j,maior;
    int cont=0,cont2=0,cont3=0;

    printf("Digite quantas vezes voce ira digitar um numero:\n");
    scanf("%d",&N);

    int vetor[N];
    int vetor2[N];

    printf("Digite os valores desejados\n");
    for(int i=0;i<N;i++){
        scanf("%d",&vetor[i]);
        vetor2[j]=vetor[i];
        j=j+1;
    }
    for(int i=0;i<N;i++){
        cont=0;
        for(int j=0;j<N;j++){
            if(vetor[i]==vetor2[j]){
                cont=cont+1;
            }
        }
        if(cont>cont2){
            maior=vetor[i];
            cont2=cont;
        }
        if(cont==1){
            cont3=cont3+1;
        }
    }

    if(cont3==N){
        printf("Nenhum numero se repetiu");
    }else{
         printf("O valor que repete mais vezes e: %d %d",maior,cont3);
    }
    return 0;
}
