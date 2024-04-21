#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double valor[3];
    double aux,cont=0;

    for(int i=0;i<3;i++){
        scanf("%lf",&valor[i]);
    }

    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(valor[i]<valor[j]){
                aux=valor[i];
                valor[i]=valor[j];
                valor[j]=aux;
            }
        }
    }

    if(valor[0]>=valor[1]+valor[2]){
        printf("NAO FORMA TRIANGULO\n");
        cont=1;
    }
    if(cont!=1){
        if(valor[0]*valor[0]==valor[1]*valor[1]+valor[2]*valor[2]){
            printf("TRIANGULO RETANGULO\n");
        }
        if(valor[0]*valor[0]>valor[1]*valor[1]+valor[2]*valor[2]){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(valor[0]*valor[0]<valor[1]*valor[1]+valor[2]*valor[2]){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(valor[0]==valor[1] && valor[0]==valor[2]&& valor[1]==valor[2]){
            printf("TRIANGULO EQUILATERO\n");
        }
        if(valor[0]==valor[1] && valor[0]!=valor[2] || valor[1]==valor[2] && valor[1]!=valor[0] || valor[0]==valor[2]&&valor[0]!=valor[1]){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}
