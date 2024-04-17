#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int quant,tanto,fim=0,cont=0,contador=0;

    printf("Digite quantos casos de teste ira fazer: ");
    scanf("%d",&quant);

    while(quant>0){

        printf("Digite quantas valores para cada caso de teste: ");
        scanf("%d",&tanto);

        int vet[tanto];

        for(int i=0;i<quant;i++){

            printf("Digite os valores desejado:\n");

            for(int j=0;j<tanto;j++){

                scanf("%d",&vet[j]);

            }

            cont=0;
            contador=0;
            fim=0;

            for(int n=2;n<tanto;n++){

                if(vet[n]<vet[n-1] && vet[n]>vet[n-2] || vet[n]>vet[n-1] && vet[n]<vet[n-2] || vet[n]==vet[n-1] || vet[n]==vet[n-2]){
                    printf("Nem CRESCENTE e nem DECRESCENTE.\n");
                    fim++;
                    break;
                }else if(vet[n]<vet[n-1] && vet[n]<vet[n-2]){
                    cont++;
                }else if(vet[n]>vet[n-1] && vet[n]>vet[n-2]){
                    contador++;
                }
            }

            if(fim<1){
                if(cont<contador){
                    printf("Ordem CRESCENTE.\n");
                }else{
                    printf("Ordem DECRESCENTE.\n");
                }
            }

        }

        printf("Digite quantos casos de teste ira fazer: ");
        scanf("%d",&quant);

    }

    printf("Obrigado por usar nosso programa!\n");

    return 0;
}
