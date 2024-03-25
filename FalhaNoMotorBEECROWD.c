/*Ao observar a curva de velocidade de um motor, o engenheiro Zé percebeu que sempre ocorria uma queda quando as medidas
eram feitas em intervalos de 10 ms. Mas esta queda acontecia em medidas diferentes a cada novo teste do motor.

Zé ficou curioso com essa falta de padrão e quer saber, para cada teste do motor, qual a primeira medida em que ocorre uma queda de velocidade.

Entrada
A entrada é um teste do motor e é dada em duas linhas. A primeira tem o número N de medidas de velocidade do motor (1 < N ≤ 100). A segunda
linha tem N inteiros: o número de RPM (rotações por minuto) Ri de cada medida (0 ≤ Ri ≤ 10000, para todo Ri, tal que 1 ≤ i ≤ N). Uma medida
é considerada uma queda se é menor que a medida anterior.

Saída
A saída é o índice da medida em que houve a primeira queda de velocidade no teste. Caso não aconteça uma queda de velocidade a saída deve ser o número zero.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int N,maior=0,indice=0,cont=0;

    scanf("%d",&N);

    int R[N];

    for(int i=0;i<N;i++){
        scanf("%d",&R[i]);
    }

    maior=R[0];

    for(int i=0;i<N;i++){
        if(cont==0){
           if(R[i]>maior){
               maior=R[i];
           }
           if(R[i]<maior){
               indice=i+1;
               cont++;
           }
        }
    }

    printf("%d\n",indice);

    return 0;
}
