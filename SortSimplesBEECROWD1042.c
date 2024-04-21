#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vetor[3];
    int vetor2[3];
    int aux;

    for(int i=0;i<3;i++){
        scanf("%d",&vetor[i]);
        vetor2[i]=vetor[i];
    }

    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(vetor[i]>vetor[j]){
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }
    }

    for(int i=0;i<3;i++){
       printf("%d\n",vetor[i]);
    }

    printf("\n");

    for(int i=0;i<3;i++){
       printf("%d\n",vetor2[i]);
    }

    return 0;
}
