#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,resultado;
    double re;
    char op;

    printf("Digite o valor de A,o sinal da conta desejada e o valor de B para ser feito a conta:\n");
    scanf("%d%c%d",&a,&op,&b);

    if(op == '+'){
       resultado = a + b;
       printf("%d + %d = %d",a,b,resultado);
    }else if(op == '-'){
       resultado = a - b;
       printf("%d - %d = %d",a,b,resultado);
    }else if(op == 'x' || op == '*'){
       resultado = a * b;
       printf("%d x %d = %d ",a,b,resultado);
    }else if(op == '/'){
       re = (double) a / b;
       printf("%d / %d = %.2lf\n",a,b,re);
    }else{
       printf("Operacao invalida\n");
    }

    return 0;
}
