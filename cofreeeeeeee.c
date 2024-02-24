#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number,N,cont2,cont, raiz_number, isPrime = 1;

    scanf("%d",&N);

    for(int number=2;number<=N;number++){
    isPrime=1;
    raiz_number = sqrt(number);
    for(int i = 3; i <= raiz_number; i += 2)
        if (number%i == 0){
            isPrime = 0;
            break;
        }
    if (number == 1 || !isPrime || (number != 2 && number%2 == 0))
        cont2=1;
    else

         cont=cont+1;

    }
    printf("%d",cont);
    return 0;
}
