#include <stdio.h>
#include <stdlib.h>

int main() {

    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    int soma=a+b+c;
    int total=(a+b+abs(a-b))/2;
    int maior=(total+c+abs(total-c))/2;
    printf("%d",maior);

    return 0;
}


