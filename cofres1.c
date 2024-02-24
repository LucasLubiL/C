#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int number, raiz_number, isPrime = 1;
printf("Enter the number\n");
scanf("%d",&number);
raiz_number = sqrt(number);
for(int i = 3; i <= raiz_number; i += 2)
if (number%i == 0){
isPrime = 0;
break;
}
if (number == 1 || !isPrime || (number != 2 &&
number%2 == 0))
printf("O numero %d, nao eh primo\n",
number);
else
printf("O numero %d, eh primo\n", number);
return 0;
}
