#include <iostream>

using namespace std;

int main() {

    double salario,ajuste,novo;

    scanf("%lf",&salario);

    if(salario>0 && salario<400.01){
        ajuste=(salario*15)/100;
        novo=salario+ajuste;
        printf("Novo salario: %.2lf\n",novo);
        printf("Reajuste ganho: %.2lf\n",ajuste);
        printf("Em percentual: 15 %\n");
    }else if(salario>=400.01 && salario<800.01){
             ajuste=(salario*12)/100;
             novo=salario+ajuste;
             printf("Novo salario: %.2lf\n",novo);
             printf("Reajuste ganho: %.2lf\n",ajuste);
             printf("Em percentual: 12 %\n");
    }else if(salario>=800.01 && salario<1200.01){
             ajuste=(salario*10)/100;
             novo=salario+ajuste;
             printf("Novo salario: %.2lf\n",novo);
             printf("Reajuste ganho: %.2lf\n",ajuste);
             printf("Em percentual: 10 %\n");
    }else if(salario>=1200.01 && salario<2000.01){
             ajuste=(salario*7)/100;
             novo=salario+ajuste;
             printf("Novo salario: %.2lf\n",novo);
             printf("Reajuste ganho: %.2lf\n",ajuste);
             printf("Em percentual: 7 %\n");
    }else if(salario>=2000.01){
             ajuste=(salario*4)/100;
             novo=salario+ajuste;
             printf("Novo salario: %.2lf\n",novo);
             printf("Reajuste ganho: %.2lf\n",ajuste);
             printf("Em percentual: 4 %\n");
    }

    return 0;
}

