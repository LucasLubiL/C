//Questão de número 1104 do BEECRWOD.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int a,b,x;

    scanf("%d %d",&a,&b);

    while(a!=0 && b!=0){
        int trocaA=0,trocaB=0;
        int ca[100000];
        int cb[100000];

        for(int i=0;i<100001;i++){
            ca[i]=0;
            cb[i]=0;
        }

        for(int i=0;i<a;i++){
            scanf("%d",&x);
            ca[x]++;
        }
        for(int i=0;i<b;i++){
            scanf("%d",&x);
            cb[x]++;
        }

        for(int i=0;i<100001;i++){
            if(ca[i]==0 && cb[i]>0){
                trocaA++;
            }
            if(ca[i]>0 && cb[i]==0){
                trocaB++;
            }
        }

        if(trocaA<trocaB){
            printf("%d\n",trocaA);
        }else{
            printf("%d\n",trocaB);
        }

        scanf("%d %d",&a,&b);

    }

    return 0;
}
