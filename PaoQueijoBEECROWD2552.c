#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int linha,coluna;

    while(scanf("%d %d",&linha,&coluna)!=EOF){

        int vetor[linha][coluna];

        for(int l=0;l<linha;l++){
            for(int c=0;c<coluna;c++){
                scanf("%d",&vetor[l][c]);
                if(vetor[l][c]==1){
                    vetor[l][c]=9;
                }else{
                    vetor[l][c]=0;
                }
            }
        }

        for(int l=0;l<linha;l++){
            for(int c=0;c<coluna;c++){
                if(vetor[l][c]==9){
                    if(vetor[l][c+1]!=9){
                        vetor[l][c+1]++;
                        if(c==coluna-1){
                            vetor[l][c+1]--;
                        }
                    }
                    if(vetor[l+1][c]!=9){
                        vetor[l+1][c]++;
                        if(l==linha-1){
                            vetor[l+1][c]--;
                        }
                    }
                    if(vetor[l-1][c]!=9){
                        vetor[l-1][c]++;
                        if(l==0){
                            vetor[l-1][c]--;
                        }

                    }
                    if(vetor[l][c-1]!=9){
                        vetor[l][c-1]++;
                        if(c==0){
                            vetor[l][c-1]--;
                        }
                    }
                }
            }
        }

        for(int l=0;l<linha;l++){
            for(int c=0;c<coluna;c++){
              printf("%d",vetor[l][c]);
            }
            printf("\n");
        }
    }

    return 0;
}
