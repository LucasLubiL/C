#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,soma=0;

    printf("Digite 2 numeros para fazer a soma dos numeros imapres entre eles: \n");
    scanf("%d %d",&a,&b);

    if(a==b){
        printf("Os numeros sao iguais,logo,nao se tem a conta.\n");
    }else if(a<b){
        for(int i=a+1;i<b;i++){
            if(i%2!=0){
                soma=soma+i;
            }
        }
    }else{
        for(int i=b+1;i<a;i++){
            if(i%2!=0){
                soma=soma+i;
            }
        }
    }

    printf("A soma dos numeros impares e de : %d\n",soma);

    return 0;
}
