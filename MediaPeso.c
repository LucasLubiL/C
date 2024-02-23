#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    double a,b,c,media,soma;

    scanf("%lf %lf %lf",&a,&b,&c);

    soma = a*2 + b*3 + c*5;
    media = soma/10;

    printf("%.1lf",media);

    return 0;
}
