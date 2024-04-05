#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int A,V,maior=0,teste=0;

    scanf("%d %d",&A,&V);

    while(A!=0 && V!=0){
        teste++;
        maior=0;
        int voo[A+1];
        int x=0,y=0;

        for(int i=1;i<=A;i++){
            voo[i]=0;
        }

        for(int i=0;i<V;i++){
            scanf("%d %d",&x,&y);
            voo[x]++;
            voo[y]++;
        }

        for(int i=1;i<=A;i++){
            if(voo[i]>maior){
                maior=voo[i];
            }
        }

        printf("Teste %d\n",teste);
        for(int i=1;i<=A;i++){
            if(voo[i]==maior){
                printf("%d ",i);
            }
        }

        printf("\n\n");

        scanf("%d %d",&A,&V);

    }

    return 0;
}
