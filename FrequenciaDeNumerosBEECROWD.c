/*Neste problema sua tarefa será ler vários números e em seguida dizer quantas vezes cada número aparece na entrada
de dados, ou seja, deve-se escrever cada um dos valores distintos que aparecem na entrada por ordem crescente de valor.

Entrada
A entrada contém apenas 1 caso de teste. A primeira linha de entrada contem um único inteiro N, que indica a quantidade
de valores que serão lidos para X (1 ≤ X ≤ 2000) logo em seguida. Com certeza cada número não aparecerá mais do que 20 vezes na entrada de dados.

Saída
Imprima a saída de acordo com o exemplo fornecido abaixo, indicando quantas vezes cada um deles aparece na entrada por ordem crescente de valor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int N,aux,cont,contador=0;

    scanf("%d",&N);

    int vetor[N];
    int auxiliar;

    for(int i=0;i<N;i++){
        scanf("%d",&vetor[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(vetor[i]>vetor[j]){
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }
    }

    for(int i=0;i<N;i++){
        cont=0;
        for(int j=0;j<N;j++){
           if(vetor[i]==vetor[j]){
              cont++;

           }
        }
        if(auxiliar!=vetor[i]){

            printf("%d aparece %d vez(es)\n",vetor[i],cont);
        }
        auxiliar=vetor[i];
    }

    return 0;
}
