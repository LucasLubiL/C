#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int T;
    int valor;
    long long int aux,fim,um=0,dois=1;

    scanf("%d",&T);

    int vetor[T];
    int N[T];

    for(int i=0;i<T;i++){
        um=0;
        dois=1;
        aux=0;
        scanf("%d",&N[i]);
        valor=N[i];
        if(valor==0){
            fim=0;
        }else if(valor==1){
            fim=1;
        }else{
           for(int i=1;i<valor;i++){
              aux=um+dois;
              um=dois;
              dois=aux;
           }
           fim=aux;
        }
        printf("Fib(%d) = %lld\n",N[i],fim);
    }

    return 0;
}
