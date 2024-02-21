#include <stdio.h>
#include <stdlib.h>

int main()
{
    int conta,opcao;



    printf("Selecione qual opcao de tabela deseja ver:\n");
    printf("\n");
    printf("Digite 1 para tabela de multiplicacao\n");
    printf("Digite 2 para tabela de divisao\n");
    scanf("%d",&opcao);


    while(opcao<1 || opcao>2){
        printf("Digie uma opcao valida(1 para multiplicacao ou 2 para divisao\n");
        scanf("%d",&opcao);
    }

    if(opcao==1){
       printf("Tabela de Multiplicacao:\n");
       for(int i=0;i<=10;i++){
          for(int c=0;c<=10;c++){
           conta=i*c;
           printf("%d x %d = %d\n",i,c,conta);
        }
        printf("\n");
       }
    }else{
       printf("Tabela de Divisao:\n");
       for(int i=1;i<=10;i++){
          for(int c=1;c<=10;c++){
           double conta2 = (double)i/c;
           printf("%d / %d = %.2lf\n",i,c,conta2);
        }
        printf("\n");
       }
    }
    return 0;
}
